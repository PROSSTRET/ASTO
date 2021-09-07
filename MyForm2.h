#pragma once
#include "MyForm3.h"
#include "MyForm4.h"
#include "MyForm5.h"
#include "MyForm6.h"
#include "MyForm7.h"
#include "MyForm8.h"


namespace ASTO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			
		}


	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::Button^ button3;
	private:

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::NotifyIcon^ notifyIcon1;
	private: System::Windows::Forms::Label^ label2;
	private: System::ComponentModel::IContainer^ components;







	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(5, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"МЕНЮ";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Location = System::Drawing::Point(106, 248);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(244, 94);
			this->button1->TabIndex = 1;
			this->button1->Text = L"База данных";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Location = System::Drawing::Point(406, 248);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(244, 94);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Продажи";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button3->Location = System::Drawing::Point(1016, 248);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(253, 94);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Закупки";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 653);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(145, 52);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Об компании";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1258, 653);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(130, 52);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Выход";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::button5_Click);
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button6->Location = System::Drawing::Point(717, 248);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(244, 94);
			this->button6->TabIndex = 6;
			this->button6->Text = L" Сотрудники";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm2::button6_Click);
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button7->Location = System::Drawing::Point(717, 370);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(244, 93);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Отчет";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm2::button7_Click);
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button8->Location = System::Drawing::Point(406, 370);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(244, 93);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Комунальные услуги";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm2::button8_Click);
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"notifyIcon1.Icon")));
			this->notifyIcon1->Text = L"notifyIcon1";
			this->notifyIcon1->Visible = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1276, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 17);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Version 1.3 beta 4";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1400, 717);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Меню";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		static  bool change = true;
private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) 
{

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!change) {
		this->button1->FlatStyle = FlatStyle::System;
		change = !change;
	}
	else {
		this->button1->FlatStyle = FlatStyle::Popup;
		change = !change;
	}
	this->Hide();
	MyForm3^ objl = gcnew MyForm3(this);
	objl->ShowDialog();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyForm4^ objl = gcnew MyForm4(this);
	objl->ShowDialog();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyForm6^ objl = gcnew MyForm6(this);
	objl->ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Программа автоматизированная система станции технического обслуживания.", "Vnimania!");
	return System::Void();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		   Application::Exit();
	   }
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyForm5^ objl = gcnew MyForm5(this);
	objl->ShowDialog();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Hide();
	MyForm7^ objl = gcnew MyForm7(this);
	objl->ShowDialog();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Hide();
	MyForm8^ objl = gcnew MyForm8(this);
	objl->ShowDialog();
}
};
}
