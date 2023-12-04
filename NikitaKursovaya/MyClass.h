#pragma once

#include <string>
#include <vector>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

#define M_PI 3.14

class GraphicElement {
public:
	double x_position = 0;
	double y_position = 0;
	double x_position2 = 0;
	double y_position2 = 0;
	virtual void drawing(Graphics^ g) = 0;

	bool isPointInsideGraphicElement(int pointX, int pointY) {
		int x_pos = x_position;
		int y_pos = y_position;
		int x_pos2 = x_position2;
		int y_pos2 = y_position2;

		if (x_position2 < x_position) {
			int temp = x_pos;
			x_pos = x_pos2;
			x_pos2 = temp;
		}
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

	virtual void drawing(Graphics^ g) override {
	}
};

class Rhombus : public Entitie {
public:
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

		// Рисуем контур прямоугольника
		//g->DrawRectangle(pen, x_position, y_position, width, height);

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
	int ratio_top_1 = 0;
	int ratio_left_1 = 0;
	Entitie* entitie2 = nullptr;
	int ratio_top_2 = 0;
	int ratio_left_2 = 0;

	bool isPointInRadiusStart(int x, int y, int radius = 20) {
		double distance = Math::Sqrt(Math::Pow(x_position - x, 2) + Math::Pow(y_position - y, 2));
		return distance <= radius;
	}
	bool isPointInRadiusEnd(int x, int y, int radius = 20) {
		double distance = Math::Sqrt(Math::Pow(x_position2 - x, 2) + Math::Pow(y_position2 - y, 2));
		return distance <= radius;
	}
	virtual void drawing(Graphics^ g) override {
	}
};

class Oval : public Entitie {
public:
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
	void virtual drawing(Graphics^ g) override {

		if (entitie1 != nullptr) {
			x_position = entitie1->x_position + ((entitie1->x_position2 - entitie1->x_position) * ((double)ratio_left_1 / 100));
			y_position = entitie1->y_position + ((entitie1->y_position2 - entitie1->y_position) * ((double)ratio_top_1 / 100));
			//Form^ form = gcnew Form();
			//MessageBox::Show(form, ratio_left_1 + " | ", "Заголовок", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		if (entitie2 != nullptr) {
			x_position2 = entitie2->x_position + ((entitie2->x_position2 - entitie2->x_position) * ((double)ratio_left_2 / 100));
			y_position2 = entitie2->y_position + ((entitie2->y_position2 - entitie2->y_position) * ((double)ratio_top_2 / 100));
			//Form^ form = gcnew Form();
			//MessageBox::Show(form, ratio_left_1 + " | ", "Заголовок", MessageBoxButtons::OK, MessageBoxIcon::Information);
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
		arrowPoints1[1] = PointF(rotatedX2 - 10 * cos(angle_1 - M_PI / 6), rotatedY2 - 10 * sin(angle_1 - M_PI / 6));
		arrowPoints1[2] = PointF(rotatedX2 - 10 * cos(angle_1 + M_PI / 6), rotatedY2 - 10 * sin(angle_1 + M_PI / 6));

		g->FillPolygon(gcnew SolidBrush(Color::FromName(gcnew String(color.c_str()))), arrowPoints1);

		// Draw the second arrow head
		array<PointF>^ arrowPoints2 = gcnew array<PointF>(3);
		arrowPoints2[0] = PointF(x_position, y_position);
		arrowPoints2[1] = PointF(x_position + 10 * cos(angle_1 - M_PI / 6), y_position + 10 * sin(angle_1 - M_PI / 6));
		arrowPoints2[2] = PointF(x_position + 10 * cos(angle_1 + M_PI / 6), y_position + 10 * sin(angle_1 + M_PI / 6));

		g->FillPolygon(gcnew SolidBrush(Color::FromName(gcnew String(color.c_str()))), arrowPoints2);

		// Draw the main line
		g->DrawLine(pen, (float)x_position, (float)y_position, rotatedX2, rotatedY2);
		delete pen;
	}
};

class ConnectionStyle2 : public Connection {
	void virtual drawing(Graphics^ g) override {

		if (entitie1 != nullptr) {
			x_position = entitie1->x_position + ((entitie1->x_position2 - entitie1->x_position) * ((double)ratio_left_1 / 100));
			y_position = entitie1->y_position + ((entitie1->y_position2 - entitie1->y_position) * ((double)ratio_top_1 / 100));
			//Form^ form = gcnew Form();
			//MessageBox::Show(form, ratio_left_1 + " | ", "Заголовок", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		if (entitie2 != nullptr) {
			x_position2 = entitie2->x_position + ((entitie2->x_position2 - entitie2->x_position) * ((double)ratio_left_2 / 100));
			y_position2 = entitie2->y_position + ((entitie2->y_position2 - entitie2->y_position) * ((double)ratio_top_2 / 100));
			//Form^ form = gcnew Form();
			//MessageBox::Show(form, ratio_left_1 + " | ", "Заголовок", MessageBoxButtons::OK, MessageBoxIcon::Information);
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
		arrowPoints[1] = PointF(rotatedX2 - 10 * cos(angle_2 - M_PI / 6), rotatedY2 - 10 * sin(angle_2 - M_PI / 6));
		arrowPoints[2] = PointF(rotatedX2 - 10 * cos(angle_2 + M_PI / 6), rotatedY2 - 10 * sin(angle_2 + M_PI / 6));

		g->FillPolygon(gcnew SolidBrush(Color::FromName(gcnew String(color.c_str()))), arrowPoints);
		delete pen;
	}
};


class ConnectionStyle3 : public Connection {
	void virtual drawing(Graphics^ g) override {

		if (entitie1 != nullptr) {
			x_position = entitie1->x_position + ((entitie1->x_position2 - entitie1->x_position) * ((double)ratio_left_1 / 100));
			y_position = entitie1->y_position + ((entitie1->y_position2 - entitie1->y_position) * ((double)ratio_top_1 / 100));
			//Form^ form = gcnew Form();
			//MessageBox::Show(form, ratio_left_1 + " | ", "Заголовок", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		if (entitie2 != nullptr) {
			x_position2 = entitie2->x_position + ((entitie2->x_position2 - entitie2->x_position) * ((double)ratio_left_2 / 100));
			y_position2 = entitie2->y_position + ((entitie2->y_position2 - entitie2->y_position) * ((double)ratio_top_2 / 100));
			//Form^ form = gcnew Form();
			//MessageBox::Show(form, ratio_left_1 + " | ", "Заголовок", MessageBoxButtons::OK, MessageBoxIcon::Information);
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

class Text : public GraphicElement {
public:
	std::string textData;
};


// Класс для управления всеми объекты 
class DrawingManager {
private:
	std::vector<GraphicElement*> elements;
public:

	GraphicElement* get_element(int x_position, int y_position) {
		for (int i = 0; i < elements.size(); i++) {
			if (elements[i]->isPointInsideGraphicElement(x_position, y_position)) {
				return elements[i];
			}
		}
		return nullptr;
	}
	Connection* get_connection_element(int x_position, int y_position) {
		for (int i = 0; i < elements.size(); i++) {
			if (dynamic_cast<Connection*>(elements[i]) != nullptr && elements[i]->isPointInsideGraphicElement(x_position, y_position)) {
				return dynamic_cast<Connection*>(elements[i]);
			}
		}
		return nullptr;
	}
	Entitie* get_entitie_element(int x_position, int y_position) {
		for (int i = 0; i < elements.size(); i++) {
			if (dynamic_cast<Entitie*>(elements[i]) != nullptr && elements[i]->isPointInsideGraphicElement(x_position, y_position)) {
				return dynamic_cast<Entitie*>(elements[i]);
			}
		}
		return nullptr;
	}
	void add_element(GraphicElement* element) {
		elements.push_back(element);
	}
	void remove_element(GraphicElement* element) {
		std::vector<GraphicElement*>::iterator it = find(elements.begin(), elements.end(), element);

		if (it != elements.end()) {
			elements.erase(it);
		}
	}
	void clear_elements() {
		elements.clear();
	}

	void draw_elements(PictureBox^ pictureBox) {
		Graphics^ g = pictureBox->CreateGraphics();

		// Очистим PictureBox перед отрисовкой
		g->Clear(pictureBox->BackColor);

		// Отрисовываем каждый элемент
		for (int i = 0; i < elements.size(); i++) {
			if (Entitie* bObject = dynamic_cast<Entitie*>(elements[i])) {
				elements[i]->drawing(g);
			}
		}
		for (int i = 0; i < elements.size(); i++) {
			if (Connection* bObject = dynamic_cast<Connection*>(elements[i])) {
				elements[i]->drawing(g);
			}
		}
		//pictureBox->Invalidate();
		//Application::DoEvents();

		delete g;
	}

};

