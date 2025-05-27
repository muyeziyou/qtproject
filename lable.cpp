#include "QtWidgetsApplication1.h"
#include <QtWidgets/QApplication>
#include <QPushButton>
#include <QLabel>
#include "main.h"
#include <QHBoxLayout>
#include <QLineEdit>
#include <QTextEdit>
#include <QSpinBox>

void lableacon(QtWidgetsApplication1 *W) {
    // 创建中心部件（针对QMainWindow的必要操作）
    QWidget* centralWidget = new QWidget(W);
    W->setCentralWidget(centralWidget);
    QHBoxLayout* cayout = new QHBoxLayout();
    QHBoxLayout* layout = new QHBoxLayout();
    QVBoxLayout* ayout = new QVBoxLayout();
    // 按钮父对象应由布局自动管理，无需显式指定
    

    
    QLineEdit* line = new QLineEdit(W);
    QTextEdit* text = new QTextEdit(W);
    QSpinBox* spin = new QSpinBox(W);

    ayout->addWidget(line);
    layout->addWidget(text);
    ayout->addWidget(spin);
    ayout->setSpacing(20);
    layout->setSpacing(20);
    layout->setContentsMargins(0, 0, 0, 0);
    cayout->addLayout(ayout);
    cayout->addLayout(layout);
    centralWidget->setLayout(cayout); // 布局绑定到中心部件

}