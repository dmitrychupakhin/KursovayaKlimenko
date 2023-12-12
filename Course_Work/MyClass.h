#pragma once

#include <string>
#include <vector>
#include "pugixml.hpp"

using namespace pugi;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

class GraphicElement {
public:
	int id = 0;
	double x_position = 0;
	double y_position = 0;
	double x_position2 = 150;
	double y_position2 = 50;

	virtual void drawing(Graphics^ g) = 0;
	virtual void to_xml_node(pugi::xml_node& root) = 0;

	bool isPointInsideGraphicElement(int pointX, int pointY) {

		int x_pos = x_position;
		int y_pos = y_position;
		int x_pos2 = x_position2;
		int y_pos2 = y_position2;
		
		//Если у нас квадрат перевернут, то меняем координаты местами что бы ответ был верный
		if (x_position2 < x_position) {
			int temp = x_pos;
			x_pos = x_pos2;
			x_pos2 = temp;
		}
		
		//Если у нас квадрат перевернут, то меняем координаты местами что бы ответ был верный
		if (y_position2 < y_position) {
			int temp = y_pos;
			y_pos = y_pos2;
			y_pos2 = temp;
		}

		int width = Math::Abs(x_pos2 - x_pos);
		int height = Math::Abs(y_pos2 - y_pos);
		
		// Проверяем, находится ли точка внутри квадрата
		return (pointX >= x_pos && pointX <= x_pos + width &&
			pointY >= y_pos && pointY <= y_pos + height);
	}
};

class Entitie : public GraphicElement {
public:
	std::string title = "title";
	std::string color = "black";

	virtual void drawing(Graphics^ g) override {}

	virtual void to_xml_node(pugi::xml_node& root) override {}
};

class Rhombus : public Entitie {
public:
	void to_xml_node(pugi::xml_node& root) override {
		xml_node node = root.append_child("Rhombus");
		node.append_child("id").text().set(id);
		node.append_child("x_position").text().set(x_position);
		node.append_child("y_position").text().set(y_position);
		node.append_child("x_position2").text().set(x_position2);
		node.append_child("y_position2").text().set(y_position2);
		node.append_child("title").text().set(title.c_str());
		node.append_child("color").text().set(color.c_str());
	}
	void virtual drawing(Graphics^ g) override {
		int width = Math::Abs(x_position2 - x_position);
		int height = Math::Abs(y_position2 - y_position);

		// Рассчитываем координаты вершин ромба
		int topX = x_position + width / 2;
		int topY = y_position + 10;  // Отступ сверху
		int rightX = x_position + width - 10;  // Отступ справа
		int rightY = y_position + height / 2;
		int bottomX = x_position + width / 2;
		int bottomY = y_position + height - 10;  // Отступ снизу
		int leftX = x_position + 10;  // Отступ слева
		int leftY = y_position + height / 2;

		array<Point>^ points = {
			Point(topX, topY),
			Point(rightX, rightY),
			Point(bottomX, bottomY),
			Point(leftX, leftY)
		};

		SolidBrush^ backgroundBrush = gcnew SolidBrush(Color::White);
		g->FillPolygon(backgroundBrush, points);

		// Создаем кисть для контура ромба
		Pen^ pen = gcnew Pen(Color::FromName(gcnew String(color.c_str())));

		// Рисуем контур ромба
		g->DrawPolygon(pen, points);

		// Создаем шрифт и кисть для текста
		Font^ font = gcnew Font("Arial", 10);
		SolidBrush^ brush = gcnew SolidBrush(Color::Black);

		// Рассчитываем позицию текста для центрирования
		float textWidth = g->MeasureString(gcnew String(title.c_str()), font).Width;
		float textHeight = g->MeasureString(gcnew String(title.c_str()), font).Height;

		float textX = x_position + (width - textWidth) / 2;
		float textY = y_position + (height - textHeight) / 2;

		// Рисуем текст
		g->DrawString(gcnew String(title.c_str()), font, brush, textX, textY);

		// Восстанавливаем предыдущее состояние графики
		delete backgroundBrush;
		delete pen;
		delete font;
		delete brush;
	}
};

class Hexagon : public Entitie {
public:
	void to_xml_node(pugi::xml_node& root) override {
		xml_node node = root.append_child("Hexagon");
		node.append_child("id").text().set(id);
		node.append_child("x_position").text().set(x_position);
		node.append_child("y_position").text().set(y_position);
		node.append_child("x_position2").text().set(x_position2);
		node.append_child("y_position2").text().set(y_position2);
		node.append_child("title").text().set(title.c_str());
		node.append_child("color").text().set(color.c_str());
	}
	void virtual drawing(Graphics^ g) override {
		int width = Math::Abs(x_position2 - x_position);
		int height = Math::Abs(y_position2 - y_position);

		// Увеличиваем размер мнимого прямоугольника с учетом отступов
		int enlargedWidth = width + 2 * 10;
		int enlargedHeight = height + 10 + 10;

		// Рассчитываем координаты вершин шестиугольника
		int side = (width - 20) / 2;  // Вычисляем длину стороны (без отступов)
		int centerX = x_position + width / 2;
		int centerY = y_position + height / 2;

		array<Point>^ points = gcnew array<Point>(6);

		for (int i = 0; i < 6; ++i) {
			double angle = 2.0 * Math::PI / 6 * i;
			int x = static_cast<int>(centerX + side * cos(angle));
			int y = static_cast<int>(centerY + side * sin(angle));
			points[i] = Point(x, y);
		}

		SolidBrush^ backgroundBrush = gcnew SolidBrush(Color::White);
		g->FillPolygon(backgroundBrush, points);

		// Создаем кисть для контура шестиугольника
		Pen^ pen = gcnew Pen(Color::FromName(gcnew String(color.c_str())));

		// Рисуем контур шестиугольника
		g->DrawPolygon(pen, points);

		// Создаем шрифт и кисть для текста
		Font^ font = gcnew Font("Arial", 10);
		SolidBrush^ brush = gcnew SolidBrush(Color::Black);

		// Рассчитываем позицию текста для центрирования
		float textWidth = g->MeasureString(gcnew String(title.c_str()), font).Width;
		float textHeight = g->MeasureString(gcnew String(title.c_str()), font).Height;

		float textX = centerX - textWidth / 2;
		float textY = centerY - textHeight / 2;

		// Рисуем текст
		g->DrawString(gcnew String(title.c_str()), font, brush, textX, textY);

		// Восстанавливаем предыдущее состояние графики
		delete backgroundBrush;
		delete pen;
		delete font;
		delete brush;
	}
};

class Square : public Entitie {
public:
	void to_xml_node(pugi::xml_node& root) override {
		xml_node node = root.append_child("Square");
		node.append_child("id").text().set(id);
		node.append_child("x_position").text().set(x_position);
		node.append_child("y_position").text().set(y_position);
		node.append_child("x_position2").text().set(x_position2);
		node.append_child("y_position2").text().set(y_position2);
		node.append_child("title").text().set(title.c_str());
		node.append_child("color").text().set(color.c_str());
	}
	void virtual drawing(Graphics^ g) override {
		int width = Math::Abs(x_position2 - x_position);
		int height = Math::Abs(y_position2 - y_position);

		SolidBrush^ backgroundBrush = gcnew SolidBrush(Color::White);
		g->FillRectangle(backgroundBrush, x_position, y_position, width, height);

		// Рассчитываем новые координаты для внутреннего квадрата
		int innerX = x_position + 10;
		int innerY = y_position + 10;
		int innerWidth = width - 20;  // Уменьшаем ширину на 20px (10px с каждой стороны)
		int innerHeight = height - 20;  // Уменьшаем высоту на 20px (10px с каждой стороны)

		// Заполняем внутренний квадрат
		g->FillRectangle(backgroundBrush, innerX, innerY, innerWidth, innerHeight);

		// Создаем кисть для контура основного квадрата
		Pen^ pen = gcnew Pen(Color::FromName(gcnew String(color.c_str())));

		// Рисуем контур внутреннего квадрата
		g->DrawRectangle(pen, innerX, innerY, innerWidth, innerHeight);

		// Создаем шрифт и кисть для текста
		Font^ font = gcnew Font("Arial", 10);
		SolidBrush^ brush = gcnew SolidBrush(Color::Black);

		// Рассчитываем позицию текста для центрирования
		float textWidth = g->MeasureString(gcnew String(title.c_str()), font).Width;
		float textHeight = g->MeasureString(gcnew String(title.c_str()), font).Height;

		float textX = x_position + (width - textWidth) / 2;
		float textY = y_position + (height - textHeight) / 2;

		// Рисуем текст
		g->DrawString(gcnew String(title.c_str()), font, brush, textX, textY);

		// Восстанавливаем предыдущее состояние графики
		delete backgroundBrush;
		delete pen;
		delete font;
		delete brush;
	}
};

class Connection : public GraphicElement {
public:
	std::string color = "black";

	Entitie* entitie1 = nullptr;
	int ratio_top_1 = 0; //Процент от верха до точки соединения 
	int ratio_left_1 = 0; //Процент от левой стороны до точки соединения 
	Entitie* entitie2 = nullptr;
	int ratio_top_2 = 0;
	int ratio_left_2 = 0;

	// Курсор в начале линии
	bool isPointInRadiusStart(int x, int y, int radius = 20) {
		double distance = Math::Sqrt(Math::Pow(x_position - x, 2) + Math::Pow(y_position - y, 2));
		return distance <= radius;
	}
	
	// Курсор в конце линии
	bool isPointInRadiusEnd(int x, int y, int radius = 20) {
		double distance = Math::Sqrt(Math::Pow(x_position2 - x, 2) + Math::Pow(y_position2 - y, 2));
		return distance <= radius;
	}
	virtual void to_xml_node(pugi::xml_node& root) override {}
	virtual void drawing(Graphics^ g) override {
	}
};

class Oval : public Entitie {
public:
	void to_xml_node(pugi::xml_node& root) override {
		xml_node node = root.append_child("Oval");
		node.append_child("id").text().set(id);
		node.append_child("x_position").text().set(x_position);
		node.append_child("y_position").text().set(y_position);
		node.append_child("x_position2").text().set(x_position2);
		node.append_child("y_position2").text().set(y_position2);
		node.append_child("title").text().set(title.c_str());
		node.append_child("color").text().set(color.c_str());
	}
	void virtual drawing(Graphics^ g) override {
		int width = Math::Abs(x_position2 - x_position);
		int height = Math::Abs(y_position2 - y_position);

		// Уменьшаем размер мнимого прямоугольника с учетом отступов
		int reducedWidth = width - 2 * 10;
		int reducedHeight = height - 2 * 10;

		// Рассчитываем координаты верхнего левого угла описанного прямоугольника
		int x = x_position + 10;
		int y = y_position + 10;

		SolidBrush^ backgroundBrush = gcnew SolidBrush(Color::White);
		g->FillEllipse(backgroundBrush, x, y, reducedWidth, reducedHeight);

		// Создаем кисть для контура овала
		Pen^ pen = gcnew Pen(Color::FromName(gcnew String(color.c_str())));

		// Рисуем контур овала
		g->DrawEllipse(pen, x, y, reducedWidth, reducedHeight);

		// Создаем шрифт и кисть для текста
		Font^ font = gcnew Font("Arial", 10);
		SolidBrush^ brush = gcnew SolidBrush(Color::Black);

		// Рассчитываем позицию текста для центрирования
		float textWidth = g->MeasureString(gcnew String(title.c_str()), font).Width;
		float textHeight = g->MeasureString(gcnew String(title.c_str()), font).Height;

		float textX = x + (reducedWidth - textWidth) / 2;
		float textY = y + (reducedHeight - textHeight) / 2;

		// Рисуем текст
		g->DrawString(gcnew String(title.c_str()), font, brush, textX, textY);

		// Восстанавливаем предыдущее состояние графики
		delete backgroundBrush;
		delete pen;
		delete font;
		delete brush;
	}
};

class Trapezoid : public Entitie {
public:
	void to_xml_node(pugi::xml_node& root) override {
		xml_node node = root.append_child("Trapezoid");
		node.append_child("id").text().set(id);
		node.append_child("x_position").text().set(x_position);
		node.append_child("y_position").text().set(y_position);
		node.append_child("x_position2").text().set(x_position2);
		node.append_child("y_position2").text().set(y_position2);
		node.append_child("title").text().set(title.c_str());
		node.append_child("color").text().set(color.c_str());
	}
	void virtual drawing(Graphics^ g) override {
		int width = Math::Abs(x_position2 - x_position);
		int height = Math::Abs(y_position2 - y_position);

		// Уменьшаем размер мнимого прямоугольника с учетом отступов
		int reducedWidth = width - 2 * 10;
		int reducedHeight = height - 2 * 10;

		// Рассчитываем координаты верхнего левого угла описанного прямоугольника
		int x = x_position + 10;
		int y = y_position + 10;

		// Рассчитываем координаты для вершин трапеции
		int topWidth = reducedWidth / 2;
		int bottomWidth = width / 2;
		int x1 = x_position + (width - topWidth) / 2;
		int x2 = x1 + topWidth;
		int x3 = x_position;
		int x4 = x_position + width;
		int y1 = y_position + 10;  // учитываем отступ снизу
		int y2 = y_position + 10;  // учитываем отступ снизу
		int y3 = y_position + height - 10;  // учитываем отступ сверху
		int y4 = y_position + height - 10;  // учитываем отступ сверху

		array<Point>^ points = gcnew array<Point>(4);
		points[0] = Point(x1, y1);
		points[1] = Point(x2, y2);
		points[2] = Point(x4, y4);
		points[3] = Point(x3, y3);

		SolidBrush^ backgroundBrush = gcnew SolidBrush(Color::White);
		g->FillPolygon(backgroundBrush, points);

		// Создаем кисть для контура трапеции
		Pen^ pen = gcnew Pen(Color::FromName(gcnew String(color.c_str())));

		// Рисуем контур трапеции
		g->DrawPolygon(pen, points);

		// Создаем шрифт и кисть для текста с подчеркиванием
		Font^ font = gcnew Font("Arial", 10, FontStyle::Regular);
		SolidBrush^ brush = gcnew SolidBrush(Color::Black);

		// Рассчитываем позицию текста для центрирования
		float textWidth = g->MeasureString(gcnew String(title.c_str()), font).Width;
		float textHeight = g->MeasureString(gcnew String(title.c_str()), font).Height;

		float textX = x + (reducedWidth - textWidth) / 2;
		float textY = y + (reducedHeight - textHeight) / 2;

		// Рисуем текст
		g->DrawString(gcnew String(title.c_str()), font, brush, textX, textY);

		// Восстанавливаем предыдущее состояние графики
		delete backgroundBrush;
		delete pen;
		delete font;
		delete brush;
	}
};

class Key : public Entitie {
public:
	void to_xml_node(pugi::xml_node& root) override {
		xml_node node = root.append_child("Key");
		node.append_child("id").text().set(id);
		node.append_child("x_position").text().set(x_position);
		node.append_child("y_position").text().set(y_position);
		node.append_child("x_position2").text().set(x_position2);
		node.append_child("y_position2").text().set(y_position2);
		node.append_child("title").text().set(title.c_str());
		node.append_child("color").text().set(color.c_str());
	}
	void virtual drawing(Graphics^ g) override {
		int width = Math::Abs(x_position2 - x_position);
		int height = Math::Abs(y_position2 - y_position);

		// Уменьшаем размер мнимого прямоугольника с учетом отступов
		int reducedWidth = width - 2 * 10;
		int reducedHeight = height - 2 * 10;

		// Рассчитываем координаты верхнего левого угла описанного прямоугольника
		int x = x_position + 10;
		int y = y_position + 10;

		SolidBrush^ backgroundBrush = gcnew SolidBrush(Color::White);
		g->FillEllipse(backgroundBrush, x, y, reducedWidth, reducedHeight);

		// Создаем кисть для контура овала
		Pen^ pen = gcnew Pen(Color::FromName(gcnew String(color.c_str())));

		// Рисуем контур овала
		g->DrawEllipse(pen, x, y, reducedWidth, reducedHeight);

		// Создаем шрифт и кисть для текста с подчеркиванием
		Font^ font = gcnew Font("Arial", 10, FontStyle::Regular | FontStyle::Underline);
		SolidBrush^ brush = gcnew SolidBrush(Color::Black);

		// Рассчитываем позицию текста для центрирования
		float textWidth = g->MeasureString(gcnew String(title.c_str()), font).Width;
		float textHeight = g->MeasureString(gcnew String(title.c_str()), font).Height;

		float textX = x + (reducedWidth - textWidth) / 2;
		float textY = y + (reducedHeight - textHeight) / 2;

		// Рисуем текст
		g->DrawString(gcnew String(title.c_str()), font, brush, textX, textY);

		// Восстанавливаем предыдущее состояние графики
		delete backgroundBrush;
		delete pen;
		delete font;
		delete brush;
	}
};

class Parallelogram : public Entitie {
public:
	void to_xml_node(pugi::xml_node& root) override {
		xml_node node = root.append_child("Parallelogram");
		node.append_child("id").text().set(id);
		node.append_child("x_position").text().set(x_position);
		node.append_child("y_position").text().set(y_position);
		node.append_child("x_position2").text().set(x_position2);
		node.append_child("y_position2").text().set(y_position2);
		node.append_child("title").text().set(title.c_str());
		node.append_child("color").text().set(color.c_str());
	}
	void virtual drawing(Graphics^ g) override {
		int width = Math::Abs(x_position2 - x_position);
		int height = Math::Abs(y_position2 - y_position);

		// Уменьшаем размер мнимого прямоугольника с учетом отступов
		int reducedWidth = width - 2 * 10;
		int reducedHeight = height - 2 * 10;

		// Рассчитываем координаты верхнего левого угла описанного прямоугольника
		int x = x_position + 10;
		int y = y_position + 10;

		// Рассчитываем координаты для вершин параллелограмма
		int x1 = x_position;
		int x2 = x_position + reducedWidth;
		int x3 = x_position + width;
		int x4 = x_position + 10;  // учитываем отступ справа
		int y1 = y_position + 10;  // учитываем отступ снизу
		int y2 = y_position + 10;  // учитываем отступ снизу
		int y3 = y_position + height - 10;  // учитываем отступ сверху
		int y4 = y_position + height - 10;  // учитываем отступ сверху

		array<Point>^ points = gcnew array<Point>(4);
		points[0] = Point(x1, y1);
		points[1] = Point(x2, y2);
		points[2] = Point(x3, y3);
		points[3] = Point(x4, y4);

		SolidBrush^ backgroundBrush = gcnew SolidBrush(Color::White);
		g->FillPolygon(backgroundBrush, points);

		// Создаем кисть для контура параллелограмма
		Pen^ pen = gcnew Pen(Color::FromName(gcnew String(color.c_str())));

		// Рисуем контур параллелограмма
		g->DrawPolygon(pen, points);

		// Создаем шрифт и кисть для текста с подчеркиванием
		Font^ font = gcnew Font("Arial", 10, FontStyle::Regular);
		SolidBrush^ brush = gcnew SolidBrush(Color::Black);

		// Рассчитываем позицию текста для центрирования
		float textWidth = g->MeasureString(gcnew String(title.c_str()), font).Width;
		float textHeight = g->MeasureString(gcnew String(title.c_str()), font).Height;

		float textX = x + (reducedWidth - textWidth) / 2;
		float textY = y + (reducedHeight - textHeight) / 2;

		// Рисуем текст
		g->DrawString(gcnew String(title.c_str()), font, brush, textX, textY);

		// Восстанавливаем предыдущее состояние графики
		delete backgroundBrush;
		delete pen;
		delete font;
		delete brush;
	}
};

class ConnectionStyle1 : public Connection {
	void to_xml_node(pugi::xml_node& root) override {
		xml_node node = root.append_child("ConnectionStyle1");
		node.append_child("id").text().set(id);
		node.append_child("x_position").text().set(x_position);
		node.append_child("y_position").text().set(y_position);
		node.append_child("x_position2").text().set(x_position2);
		node.append_child("y_position2").text().set(y_position2);
		node.append_child("color").text().set(color.c_str());
		if (entitie1 != nullptr) {
			node.append_child("entitie1").text().set(entitie1->id);
			node.append_child("ratio_top_1").text().set(ratio_top_1);
			node.append_child("ratio_left_1").text().set(ratio_left_1);
		}
		if (entitie2 != nullptr) {
			node.append_child("entitie2").text().set(entitie2->id);
			node.append_child("ratio_top_2").text().set(ratio_top_2);
			node.append_child("ratio_left_2").text().set(ratio_left_2);
		}
	}
	void virtual drawing(Graphics^ g) override {

		if (entitie1 != nullptr) {
			x_position = entitie1->x_position + ((entitie1->x_position2 - entitie1->x_position) * ((double)ratio_left_1 / 100));
			y_position = entitie1->y_position + ((entitie1->y_position2 - entitie1->y_position) * ((double)ratio_top_1 / 100));
		}
		if (entitie2 != nullptr) {
			x_position2 = entitie2->x_position + ((entitie2->x_position2 - entitie2->x_position) * ((double)ratio_left_2 / 100));
			y_position2 = entitie2->y_position + ((entitie2->y_position2 - entitie2->y_position) * ((double)ratio_top_2 / 100));
		}

		Pen^ pen = gcnew Pen(Color::FromName(gcnew String(color.c_str())), 2);

		// Преобразование координат
		float rotatedX2 = x_position + (x_position2 - x_position) * cos(0) - (y_position2 - y_position) * sin(0);
		float rotatedY2 = y_position + (x_position2 - x_position) * sin(0) + (y_position2 - y_position) * cos(0);

		// Используйте float в аргументах DrawLine
		g->DrawLine(pen, (float)x_position, (float)y_position, rotatedX2, rotatedY2);

		array<PointF>^ arrowPoints1 = gcnew array<PointF>(3);
		float angle_1 = atan2(rotatedY2 - y_position, rotatedX2 - x_position);
		arrowPoints1[0] = PointF(rotatedX2, rotatedY2);
		arrowPoints1[1] = PointF(rotatedX2 - 10 * cos(angle_1 - Math::PI / 6), rotatedY2 - 10 * sin(angle_1 - Math::PI / 6));
		arrowPoints1[2] = PointF(rotatedX2 - 10 * cos(angle_1 + Math::PI / 6), rotatedY2 - 10 * sin(angle_1 + Math::PI / 6));

		g->FillPolygon(gcnew SolidBrush(Color::FromName(gcnew String(color.c_str()))), arrowPoints1);

		// Draw the second arrow head
		array<PointF>^ arrowPoints2 = gcnew array<PointF>(3);
		arrowPoints2[0] = PointF(x_position, y_position);
		arrowPoints2[1] = PointF(x_position + 10 * cos(angle_1 - Math::PI / 6), y_position + 10 * sin(angle_1 - Math::PI / 6));
		arrowPoints2[2] = PointF(x_position + 10 * cos(angle_1 + Math::PI / 6), y_position + 10 * sin(angle_1 + Math::PI / 6));

		g->FillPolygon(gcnew SolidBrush(Color::FromName(gcnew String(color.c_str()))), arrowPoints2);

		// Draw the main line
		g->DrawLine(pen, (float)x_position, (float)y_position, rotatedX2, rotatedY2);
		delete pen;
	}
};

class ConnectionStyle2 : public Connection {
	void to_xml_node(pugi::xml_node& root) override {
		xml_node node = root.append_child("ConnectionStyle2");
		node.append_child("id").text().set(id);
		node.append_child("x_position").text().set(x_position);
		node.append_child("y_position").text().set(y_position);
		node.append_child("x_position2").text().set(x_position2);
		node.append_child("y_position2").text().set(y_position2);
		node.append_child("color").text().set(color.c_str());
		if (entitie1 != nullptr) {
			node.append_child("entitie1").text().set(entitie1->id);
			node.append_child("ratio_top_1").text().set(ratio_top_1);
			node.append_child("ratio_left_1").text().set(ratio_left_1);
		}
		if (entitie2 != nullptr) {
			node.append_child("entitie2").text().set(entitie2->id);
			node.append_child("ratio_top_2").text().set(ratio_top_2);
			node.append_child("ratio_left_2").text().set(ratio_left_2);
		}
	}
	void virtual drawing(Graphics^ g) override {

		if (entitie1 != nullptr) {
			x_position = entitie1->x_position + ((entitie1->x_position2 - entitie1->x_position) * ((double)ratio_left_1 / 100));
			y_position = entitie1->y_position + ((entitie1->y_position2 - entitie1->y_position) * ((double)ratio_top_1 / 100));

		}
		if (entitie2 != nullptr) {
			x_position2 = entitie2->x_position + ((entitie2->x_position2 - entitie2->x_position) * ((double)ratio_left_2 / 100));
			y_position2 = entitie2->y_position + ((entitie2->y_position2 - entitie2->y_position) * ((double)ratio_top_2 / 100));
		}

		Pen^ pen = gcnew Pen(Color::FromName(gcnew String(color.c_str())), 2);

		// Преобразование координат
		float rotatedX2 = x_position + (x_position2 - x_position) * cos(0) - (y_position2 - y_position) * sin(0);
		float rotatedY2 = y_position + (x_position2 - x_position) * sin(0) + (y_position2 - y_position) * cos(0);

		// Используйте float в аргументах DrawLine
		g->DrawLine(pen, (float)x_position, (float)y_position, rotatedX2, rotatedY2);

		array<PointF>^ arrowPoints = gcnew array<PointF>(3);
		float angle_2 = atan2(rotatedY2 - y_position, rotatedX2 - x_position);
		arrowPoints[0] = PointF(rotatedX2, rotatedY2);
		arrowPoints[1] = PointF(rotatedX2 - 10 * cos(angle_2 - Math::PI / 6), rotatedY2 - 10 * sin(angle_2 - Math::PI / 6));
		arrowPoints[2] = PointF(rotatedX2 - 10 * cos(angle_2 + Math::PI / 6), rotatedY2 - 10 * sin(angle_2 + Math::PI / 6));

		g->FillPolygon(gcnew SolidBrush(Color::FromName(gcnew String(color.c_str()))), arrowPoints);
		delete pen;
	}
};

class ConnectionStyle3 : public Connection {
	void to_xml_node(pugi::xml_node& root) override {
		xml_node node = root.append_child("ConnectionStyle3");
		node.append_child("id").text().set(id);
		node.append_child("x_position").text().set(x_position);
		node.append_child("y_position").text().set(y_position);
		node.append_child("x_position2").text().set(x_position2);
		node.append_child("y_position2").text().set(y_position2);
		node.append_child("color").text().set(color.c_str());
		if (entitie1 != nullptr) {
			node.append_child("entitie1").text().set(entitie1->id);
			node.append_child("ratio_top_1").text().set(ratio_top_1);
			node.append_child("ratio_left_1").text().set(ratio_left_1);
		}
		if (entitie2 != nullptr) {
			node.append_child("entitie2").text().set(entitie2->id);
			node.append_child("ratio_top_2").text().set(ratio_top_2);
			node.append_child("ratio_left_2").text().set(ratio_left_2);
		}
	}
	void virtual drawing(Graphics^ g) override {
		if (entitie1 != nullptr) {
			x_position = entitie1->x_position + ((entitie1->x_position2 - entitie1->x_position) * ((double)ratio_left_1 / 100));
			y_position = entitie1->y_position + ((entitie1->y_position2 - entitie1->y_position) * ((double)ratio_top_1 / 100));
		}
		if (entitie2 != nullptr) {
			x_position2 = entitie2->x_position + ((entitie2->x_position2 - entitie2->x_position) * ((double)ratio_left_2 / 100));
			y_position2 = entitie2->y_position + ((entitie2->y_position2 - entitie2->y_position) * ((double)ratio_top_2 / 100));
		}

		Pen^ pen = gcnew Pen(Color::FromName(gcnew String(color.c_str())), 2);

		// Преобразование координат
		float rotatedX2 = x_position + (x_position2 - x_position) * cos(0) - (y_position2 - y_position) * sin(0);
		float rotatedY2 = y_position + (x_position2 - x_position) * sin(0) + (y_position2 - y_position) * cos(0);

		// Используйте float в аргументах DrawLine
		g->DrawLine(pen, (float)x_position, (float)y_position, rotatedX2, rotatedY2);
		delete pen;
	}
};

class TextElement : public GraphicElement {
public:
	std::string title = "title";
	std::string color = "black";
	void to_xml_node(pugi::xml_node& root) override {
		xml_node node = root.append_child("Text");
		node.append_child("id").text().set(id);
		node.append_child("x_position").text().set(x_position);
		node.append_child("y_position").text().set(y_position);
		node.append_child("x_position2").text().set(x_position2);
		node.append_child("y_position2").text().set(y_position2);
		node.append_child("title").text().set(title.c_str());
		node.append_child("color").text().set(color.c_str());
	}
	void virtual drawing(Graphics^ g) override {
		Font^ font = gcnew Font("Arial", 10, FontStyle::Regular);
		SolidBrush^ brush = gcnew SolidBrush(Color::FromName(gcnew String(color.c_str())));

		float textX = x_position;
		float textY = y_position;

		// Рисуем текст
		g->DrawString(gcnew String(title.c_str()), font, brush, textX, textY);
	}
};

// Класс для управления всеми объекты 
class DrawingManager {
private:
	int currentGraphicElementId = 0;
	std::vector<Entitie*> entities;
	std::vector<Connection*> connections;
	std::vector<TextElement*> text_elements;
public:
	void open_xml_file(std::string path) {
		currentGraphicElementId = 0;
		entities.clear();
		connections.clear();
		text_elements.clear();

		xml_document File;
		xml_parse_result result = File.load_file(path.c_str());

		if (result) {
			xml_node Elements = File.child("Elements");

			for (xml_node entityNode = Elements.child("Entities").first_child(); entityNode; entityNode = entityNode.next_sibling()) {

				std::string nodeName = entityNode.name();
				Entitie* entity = nullptr;

				if (nodeName == "Rhombus") {
					entity = new Rhombus();
				}
				else if (nodeName == "Hexagon") {
					entity = new Hexagon();
				}
				else if (nodeName == "Square") {
					entity = new Square();
				}
				else if (nodeName == "Oval") {
					entity = new Oval();
				}
				else if (nodeName == "Trapezoid") {
					entity = new Trapezoid();
				}
				else if (nodeName == "Key") {
					entity = new Key();
				}
				else if (nodeName == "Parallelogram") {
					entity = new Parallelogram();
				}

				if (entity) {
					// Общее заполнение полей для всех фигур
					entity->id = entityNode.child("id").text().as_int();
					entity->x_position = entityNode.child("x_position").text().as_int();
					entity->y_position = entityNode.child("y_position").text().as_int();
					entity->x_position2 = entityNode.child("x_position2").text().as_int();
					entity->y_position2 = entityNode.child("y_position2").text().as_int();
					entity->title = entityNode.child("title").text().as_string();
					entity->color = entityNode.child("color").text().as_string();

					entities.push_back(entity);
				}
			}
			for (xml_node connectionNode = Elements.child("Connections").first_child(); connectionNode; connectionNode = connectionNode.next_sibling()) {

				std::string nodeName = connectionNode.name();
				Connection* connection = nullptr;

				if (nodeName == "ConnectionStyle1") {
					connection = new ConnectionStyle1();
				}
				else if (nodeName == "ConnectionStyle2") {
					connection = new ConnectionStyle2();
				}
				else if (nodeName == "ConnectionStyle3") {
					connection = new ConnectionStyle3();
				}
				

				if (connection) {
					// Общее заполнение полей для всех фигур
					connection->id = connectionNode.child("id").text().as_int();
					connection->x_position = connectionNode.child("x_position").text().as_int();
					connection->y_position = connectionNode.child("y_position").text().as_int();
					connection->x_position2 = connectionNode.child("x_position2").text().as_int();
					connection->y_position2 = connectionNode.child("y_position2").text().as_int();
					connection->color = connectionNode.child("color").text().as_string();
					
					xml_node entitie1 = connectionNode.child("entitie1");
					if (entitie1) {
						connection->entitie1 = get_entitie(entitie1.text().as_int());
						connection->ratio_left_1 = connectionNode.child("ratio_left_1").text().as_int();
						connection->ratio_top_1 = connectionNode.child("ratio_top_1").text().as_int();
					}
					xml_node entitie2 = connectionNode.child("entitie2");
					if (entitie2) {
						connection->entitie2 = get_entitie(entitie2.text().as_int());
						connection->ratio_left_2 = connectionNode.child("ratio_left_2").text().as_int();
						connection->ratio_top_2 = connectionNode.child("ratio_top_2").text().as_int();
					}

					connections.push_back(connection);
				}
			}
			for (xml_node textNode = Elements.child("Text_elements").first_child(); textNode; textNode = textNode.next_sibling()) {
				std::string nodeName = textNode.name();
				TextElement* text = new TextElement();

				if (text) {
					// Общее заполнение полей для всех фигур
					text->id = textNode.child("id").text().as_int();
					text->x_position = textNode.child("x_position").text().as_int();
					text->y_position = textNode.child("y_position").text().as_int();
					text->x_position2 = textNode.child("x_position2").text().as_int();
					text->y_position2 = textNode.child("y_position2").text().as_int();
					text->title = textNode.child("title").text().as_string();
					text->color = textNode.child("color").text().as_string();

					text_elements.push_back(text);
				}

			}

		}

	}
	void get_xml_file(std::string path) {
		std::string FileName;
		xml_document File;
		xml_node Elements = File.append_child("Elements");

		xml_node Entities = Elements.append_child("Entities");
		xml_node Connections = Elements.append_child("Connections");
		xml_node Text_elements = Elements.append_child("Text_elements");

		for (int i = 0; i < entities.size(); i++) {
			entities[i]->to_xml_node(Entities);
		}
		for (int i = 0; i < connections.size(); i++) {
			connections[i]->to_xml_node(Connections);
		}
		for (int i = 0; i < text_elements.size(); i++) {
			text_elements[i]->to_xml_node(Text_elements);
		}

		File.save_file(path.c_str(), PUGIXML_TEXT("  "), pugi::format_default, pugi::encoding_utf8);
	}

	Entitie* get_entitie_element(int x_position, int y_position) {
		for (int i = 0; i < entities.size(); i++) {
			if (entities[i]->isPointInsideGraphicElement(x_position, y_position)) {
				return entities[i];
			}
		}
		return nullptr;
	}
	Connection* get_connection_element(int x_position, int y_position) {
		for (int i = 0; i < connections.size(); i++) {
			if (connections[i]->isPointInsideGraphicElement(x_position, y_position)) {
				return connections[i];
			}
		}
		return nullptr;
	}
	TextElement* get_text_element(int x_position, int y_position) {
		for (int i = 0; i < text_elements.size(); i++) {
			if (text_elements[i]->isPointInsideGraphicElement(x_position, y_position)) {
				return text_elements[i];
			}
		}
		return nullptr;
	}

	Entitie* get_entitie(int id) {
		for (Entitie* entitie : entities) {
			if (entitie->id == id) {
				return entitie;
			}
		}
	}

	std::vector<Connection*> get_connections_elements() {
		return connections;
	}

	void add_entitie_element(Entitie* element) {
		element->id = currentGraphicElementId;
		currentGraphicElementId += 1;
		entities.push_back(element);
	}
	void add_connection_element(Connection* element) {
		element->id = currentGraphicElementId;
		currentGraphicElementId += 1;
		connections.push_back(element);
	}
	void add_element(TextElement* element) {
		element->id = currentGraphicElementId;
		currentGraphicElementId += 1;
		text_elements.push_back(element);
	}
	void remove_entitie_element(Entitie* element) {
		std::vector<Entitie*>::iterator it = find(entities.begin(), entities.end(), element);

		if (it != entities.end()) {
			entities.erase(it);
		}
	}
	void remove_connection_element(Connection* element) {
		std::vector<Connection*>::iterator it = find(connections.begin(), connections.end(), element);

		if (it != connections.end()) {
			connections.erase(it);
		}
	}
	void remove_text_elements_element(TextElement* element) {
		std::vector<TextElement*>::iterator it = find(text_elements.begin(), text_elements.end(), element);

		if (it != text_elements.end()) {
			text_elements.erase(it);
		}
	}

	void clear_elements() {
		entities.clear();
		text_elements.clear();
		connections.clear();
	}

	void draw_elements(PictureBox^ pictureBox) {
		Bitmap^ bmp = gcnew Bitmap(pictureBox->Width, pictureBox->Height);
		Graphics^ g = Graphics::FromImage(bmp);

		// Очистим PictureBox перед отрисовкой
		g->Clear(pictureBox->BackColor);

		// Рисуем обьекты 
		for (int i = 0; i < entities.size(); i++) {
			entities[i]->drawing(g);
		}
		// Рисуем стрелки
		for (int i = 0; i < connections.size(); i++) {
			connections[i]->drawing(g);
		}
		// Рисуем текст
		for (int i = 0; i < text_elements.size(); i++) {
			text_elements[i]->drawing(g);
		}
		pictureBox->Image = bmp;
		delete g;
	}

};

