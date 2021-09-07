#pragma once


namespace ASTO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace ASTO;

	/// <summary>
	/// Сводка для MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	
	public:
		Form^ obj;
		MyForm5(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		MyForm5(Form^ objl)
		{
			obj = objl;
			InitializeComponent();

		}
	
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
		


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ действияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ назадToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ авторизацияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ базаДанныхToolStripMenuItem;







	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ главноеМенюToolStripMenuItem;
	private: System::Windows::Forms::BindingNavigator^ bindingNavigator1;
	private: System::Windows::Forms::ToolStripButton^ bindingNavigatorAddNewItem;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Data::DataSet^ dataSet1;
	private: System::Data::DataTable^ dataTable1;
	private: System::Data::DataColumn^ dataColumn1;
	private: System::Data::DataColumn^ dataColumn2;
	private: System::Data::DataColumn^ dataColumn3;
	private: System::Data::DataColumn^ dataColumn4;
	private: System::Data::DataColumn^ dataColumn5;
	private: System::Windows::Forms::ToolStripLabel^ bindingNavigatorCountItem;
	private: System::Windows::Forms::ToolStripButton^ bindingNavigatorDeleteItem;


	private: System::Windows::Forms::ToolStripButton^ bindingNavigatorMoveFirstItem;
	private: System::Windows::Forms::ToolStripButton^ bindingNavigatorMovePreviousItem;
	private: System::Windows::Forms::ToolStripSeparator^ bindingNavigatorSeparator;
	private: System::Windows::Forms::ToolStripTextBox^ bindingNavigatorPositionItem;
	private: System::Windows::Forms::ToolStripSeparator^ bindingNavigatorSeparator1;
	private: System::Windows::Forms::ToolStripButton^ bindingNavigatorMoveNextItem;
	private: System::Windows::Forms::ToolStripButton^ bindingNavigatorMoveLastItem;
	private: System::Windows::Forms::ToolStripSeparator^ bindingNavigatorSeparator2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::Data::OleDb::OleDbCommand^ oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbConnection^ oleDbConnection1;
	private: System::Data::OleDb::OleDbCommand^ oleDbInsertCommand1;
	private: System::Data::OleDb::OleDbCommand^ oleDbUpdateCommand1;
	private: System::Data::OleDb::OleDbCommand^ oleDbDeleteCommand1;
	private: System::Data::OleDb::OleDbDataAdapter^ oleDbDataAdapter1;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

	private: System::Windows::Forms::NotifyIcon^ notifyIcon1;
	private: System::Windows::Forms::TextBox^ textBox1;





	private: System::Windows::Forms::DataGridViewTextBoxColumn^ iDDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ фИОDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ должностьDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ датаРожденияDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ датаПриказаDataGridViewTextBoxColumn;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::PageSetupDialog^ pageSetupDialog1;
	private: System::Windows::Forms::PrintDialog^ printDialog1;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;


	private:




	private: System::ComponentModel::IContainer^ components;













	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm5::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->действияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->назадToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->авторизацияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->базаДанныхToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->главноеМенюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bindingNavigator1 = (gcnew System::Windows::Forms::BindingNavigator(this->components));
			this->bindingNavigatorAddNewItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->dataTable1 = (gcnew System::Data::DataTable());
			this->dataColumn1 = (gcnew System::Data::DataColumn());
			this->dataColumn2 = (gcnew System::Data::DataColumn());
			this->dataColumn3 = (gcnew System::Data::DataColumn());
			this->dataColumn4 = (gcnew System::Data::DataColumn());
			this->dataColumn5 = (gcnew System::Data::DataColumn());
			this->bindingNavigatorCountItem = (gcnew System::Windows::Forms::ToolStripLabel());
			this->bindingNavigatorDeleteItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorMoveFirstItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorMovePreviousItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->bindingNavigatorPositionItem = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->bindingNavigatorSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->bindingNavigatorMoveNextItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorMoveLastItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripLabel1 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->iDDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->фИОDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->должностьDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->датаРожденияDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->датаПриказаDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pageSetupDialog1 = (gcnew System::Windows::Forms::PageSetupDialog());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingNavigator1))->BeginInit();
			this->bindingNavigator1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->действияToolStripMenuItem,
					this->выходToolStripMenuItem, this->главноеМенюToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1300, 28);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// действияToolStripMenuItem
			// 
			this->действияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->назадToolStripMenuItem });
			this->действияToolStripMenuItem->Name = L"действияToolStripMenuItem";
			this->действияToolStripMenuItem->Size = System::Drawing::Size(88, 24);
			this->действияToolStripMenuItem->Text = L"Действия";
			// 
			// назадToolStripMenuItem
			// 
			this->назадToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->авторизацияToolStripMenuItem,
					this->базаДанныхToolStripMenuItem
			});
			this->назадToolStripMenuItem->Name = L"назадToolStripMenuItem";
			this->назадToolStripMenuItem->Size = System::Drawing::Size(134, 26);
			this->назадToolStripMenuItem->Text = L"Назад";
			// 
			// авторизацияToolStripMenuItem
			// 
			this->авторизацияToolStripMenuItem->Name = L"авторизацияToolStripMenuItem";
			this->авторизацияToolStripMenuItem->Size = System::Drawing::Size(184, 26);
			this->авторизацияToolStripMenuItem->Text = L"Авторизация";
			// 
			// базаДанныхToolStripMenuItem
			// 
			this->базаДанныхToolStripMenuItem->Name = L"базаДанныхToolStripMenuItem";
			this->базаДанныхToolStripMenuItem->Size = System::Drawing::Size(184, 26);
			this->базаДанныхToolStripMenuItem->Text = L"База данных";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm5::выходToolStripMenuItem_Click);
			// 
			// главноеМенюToolStripMenuItem
			// 
			this->главноеМенюToolStripMenuItem->Name = L"главноеМенюToolStripMenuItem";
			this->главноеМенюToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->главноеМенюToolStripMenuItem->Text = L"Главное меню";
			this->главноеМенюToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm5::главноеМенюToolStripMenuItem_Click);
			// 
			// bindingNavigator1
			// 
			this->bindingNavigator1->AddNewItem = this->bindingNavigatorAddNewItem;
			this->bindingNavigator1->BindingSource = this->bindingSource1;
			this->bindingNavigator1->CountItem = this->bindingNavigatorCountItem;
			this->bindingNavigator1->DeleteItem = this->bindingNavigatorDeleteItem;
			this->bindingNavigator1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->bindingNavigator1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(13) {
				this->bindingNavigatorMoveFirstItem,
					this->bindingNavigatorMovePreviousItem, this->bindingNavigatorSeparator, this->bindingNavigatorPositionItem, this->bindingNavigatorCountItem,
					this->bindingNavigatorSeparator1, this->bindingNavigatorMoveNextItem, this->bindingNavigatorMoveLastItem, this->bindingNavigatorSeparator2,
					this->bindingNavigatorAddNewItem, this->bindingNavigatorDeleteItem, this->toolStripButton1, this->toolStripLabel1
			});
			this->bindingNavigator1->Location = System::Drawing::Point(0, 28);
			this->bindingNavigator1->MoveFirstItem = this->bindingNavigatorMoveFirstItem;
			this->bindingNavigator1->MoveLastItem = this->bindingNavigatorMoveLastItem;
			this->bindingNavigator1->MoveNextItem = this->bindingNavigatorMoveNextItem;
			this->bindingNavigator1->MovePreviousItem = this->bindingNavigatorMovePreviousItem;
			this->bindingNavigator1->Name = L"bindingNavigator1";
			this->bindingNavigator1->PositionItem = this->bindingNavigatorPositionItem;
			this->bindingNavigator1->Size = System::Drawing::Size(1300, 27);
			this->bindingNavigator1->TabIndex = 3;
			this->bindingNavigator1->Text = L"bindingNavigator1";
			// 
			// bindingNavigatorAddNewItem
			// 
			this->bindingNavigatorAddNewItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorAddNewItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorAddNewItem.Image")));
			this->bindingNavigatorAddNewItem->Name = L"bindingNavigatorAddNewItem";
			this->bindingNavigatorAddNewItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorAddNewItem->Size = System::Drawing::Size(29, 24);
			this->bindingNavigatorAddNewItem->Text = L"Добавить";
			// 
			// bindingSource1
			// 
			this->bindingSource1->DataMember = L"sotrudniki";
			this->bindingSource1->DataSource = this->dataSet1;
			// 
			// dataSet1
			// 
			this->dataSet1->DataSetName = L"NewDataSet";
			this->dataSet1->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) { this->dataTable1 });
			// 
			// dataTable1
			// 
			this->dataTable1->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(5) {
				this->dataColumn1, this->dataColumn2,
					this->dataColumn3, this->dataColumn4, this->dataColumn5
			});
			this->dataTable1->TableName = L"sotrudniki";
			// 
			// dataColumn1
			// 
			this->dataColumn1->ColumnName = L"ID";
			// 
			// dataColumn2
			// 
			this->dataColumn2->ColumnName = L"ФИО";
			// 
			// dataColumn3
			// 
			this->dataColumn3->ColumnName = L"Должность";
			// 
			// dataColumn4
			// 
			this->dataColumn4->ColumnName = L"Дата рождения";
			// 
			// dataColumn5
			// 
			this->dataColumn5->ColumnName = L"Дата приказа";
			// 
			// bindingNavigatorCountItem
			// 
			this->bindingNavigatorCountItem->Name = L"bindingNavigatorCountItem";
			this->bindingNavigatorCountItem->Size = System::Drawing::Size(55, 24);
			this->bindingNavigatorCountItem->Text = L"для {0}";
			this->bindingNavigatorCountItem->ToolTipText = L"Общее число элементов";
			// 
			// bindingNavigatorDeleteItem
			// 
			this->bindingNavigatorDeleteItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorDeleteItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorDeleteItem.Image")));
			this->bindingNavigatorDeleteItem->Name = L"bindingNavigatorDeleteItem";
			this->bindingNavigatorDeleteItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorDeleteItem->Size = System::Drawing::Size(29, 24);
			this->bindingNavigatorDeleteItem->Text = L"Удалить";
			// 
			// bindingNavigatorMoveFirstItem
			// 
			this->bindingNavigatorMoveFirstItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMoveFirstItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveFirstItem.Image")));
			this->bindingNavigatorMoveFirstItem->Name = L"bindingNavigatorMoveFirstItem";
			this->bindingNavigatorMoveFirstItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMoveFirstItem->Size = System::Drawing::Size(29, 24);
			this->bindingNavigatorMoveFirstItem->Text = L"Переместить в начало";
			// 
			// bindingNavigatorMovePreviousItem
			// 
			this->bindingNavigatorMovePreviousItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMovePreviousItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMovePreviousItem.Image")));
			this->bindingNavigatorMovePreviousItem->Name = L"bindingNavigatorMovePreviousItem";
			this->bindingNavigatorMovePreviousItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMovePreviousItem->Size = System::Drawing::Size(29, 24);
			this->bindingNavigatorMovePreviousItem->Text = L"Переместить назад";
			// 
			// bindingNavigatorSeparator
			// 
			this->bindingNavigatorSeparator->Name = L"bindingNavigatorSeparator";
			this->bindingNavigatorSeparator->Size = System::Drawing::Size(6, 27);
			// 
			// bindingNavigatorPositionItem
			// 
			this->bindingNavigatorPositionItem->AccessibleName = L"Положение";
			this->bindingNavigatorPositionItem->AutoSize = false;
			this->bindingNavigatorPositionItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->bindingNavigatorPositionItem->Name = L"bindingNavigatorPositionItem";
			this->bindingNavigatorPositionItem->Size = System::Drawing::Size(50, 27);
			this->bindingNavigatorPositionItem->Text = L"0";
			this->bindingNavigatorPositionItem->ToolTipText = L"Текущее положение";
			// 
			// bindingNavigatorSeparator1
			// 
			this->bindingNavigatorSeparator1->Name = L"bindingNavigatorSeparator1";
			this->bindingNavigatorSeparator1->Size = System::Drawing::Size(6, 27);
			// 
			// bindingNavigatorMoveNextItem
			// 
			this->bindingNavigatorMoveNextItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMoveNextItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveNextItem.Image")));
			this->bindingNavigatorMoveNextItem->Name = L"bindingNavigatorMoveNextItem";
			this->bindingNavigatorMoveNextItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMoveNextItem->Size = System::Drawing::Size(29, 24);
			this->bindingNavigatorMoveNextItem->Text = L"Переместить вперед";
			// 
			// bindingNavigatorMoveLastItem
			// 
			this->bindingNavigatorMoveLastItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMoveLastItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveLastItem.Image")));
			this->bindingNavigatorMoveLastItem->Name = L"bindingNavigatorMoveLastItem";
			this->bindingNavigatorMoveLastItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMoveLastItem->Size = System::Drawing::Size(29, 24);
			this->bindingNavigatorMoveLastItem->Text = L"Переместить в конец";
			// 
			// bindingNavigatorSeparator2
			// 
			this->bindingNavigatorSeparator2->Name = L"bindingNavigatorSeparator2";
			this->bindingNavigatorSeparator2->Size = System::Drawing::Size(6, 27);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(29, 24);
			this->toolStripButton1->Text = L"Сохранить";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm5::toolStripButton1_Click);
			// 
			// toolStripLabel1
			// 
			this->toolStripLabel1->Name = L"toolStripLabel1";
			this->toolStripLabel1->Size = System::Drawing::Size(93, 24);
			this->toolStripLabel1->Text = L"Поиск по ID";
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoGenerateColumns = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->iDDataGridViewTextBoxColumn,
					this->фИОDataGridViewTextBoxColumn, this->должностьDataGridViewTextBoxColumn, this->датаРожденияDataGridViewTextBoxColumn, this->датаПриказаDataGridViewTextBoxColumn
			});
			this->dataGridView1->DataSource = this->bindingSource1;
			this->dataGridView1->Location = System::Drawing::Point(12, 77);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1276, 553);
			this->dataGridView1->TabIndex = 4;
			// 
			// iDDataGridViewTextBoxColumn
			// 
			this->iDDataGridViewTextBoxColumn->DataPropertyName = L"ID";
			this->iDDataGridViewTextBoxColumn->HeaderText = L"ID";
			this->iDDataGridViewTextBoxColumn->MinimumWidth = 6;
			this->iDDataGridViewTextBoxColumn->Name = L"iDDataGridViewTextBoxColumn";
			this->iDDataGridViewTextBoxColumn->Width = 125;
			// 
			// фИОDataGridViewTextBoxColumn
			// 
			this->фИОDataGridViewTextBoxColumn->DataPropertyName = L"ФИО";
			this->фИОDataGridViewTextBoxColumn->HeaderText = L"ФИО";
			this->фИОDataGridViewTextBoxColumn->MinimumWidth = 6;
			this->фИОDataGridViewTextBoxColumn->Name = L"фИОDataGridViewTextBoxColumn";
			this->фИОDataGridViewTextBoxColumn->Width = 125;
			// 
			// должностьDataGridViewTextBoxColumn
			// 
			this->должностьDataGridViewTextBoxColumn->DataPropertyName = L"Должность";
			this->должностьDataGridViewTextBoxColumn->HeaderText = L"Должность";
			this->должностьDataGridViewTextBoxColumn->MinimumWidth = 6;
			this->должностьDataGridViewTextBoxColumn->Name = L"должностьDataGridViewTextBoxColumn";
			this->должностьDataGridViewTextBoxColumn->Width = 125;
			// 
			// датаРожденияDataGridViewTextBoxColumn
			// 
			this->датаРожденияDataGridViewTextBoxColumn->DataPropertyName = L"Дата рождения";
			this->датаРожденияDataGridViewTextBoxColumn->HeaderText = L"Дата рождения";
			this->датаРожденияDataGridViewTextBoxColumn->MinimumWidth = 6;
			this->датаРожденияDataGridViewTextBoxColumn->Name = L"датаРожденияDataGridViewTextBoxColumn";
			this->датаРожденияDataGridViewTextBoxColumn->Width = 125;
			// 
			// датаПриказаDataGridViewTextBoxColumn
			// 
			this->датаПриказаDataGridViewTextBoxColumn->DataPropertyName = L"Дата приказа";
			this->датаПриказаDataGridViewTextBoxColumn->HeaderText = L"Дата приказа";
			this->датаПриказаDataGridViewTextBoxColumn->MinimumWidth = 6;
			this->датаПриказаDataGridViewTextBoxColumn->Name = L"датаПриказаDataGridViewTextBoxColumn";
			this->датаПриказаDataGridViewTextBoxColumn->Width = 125;
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = L"SELECT ID, ФИО, Должность, [Дата рождения], [Дата приказа]\r\nFROM     sotrudniki";
			this->oleDbSelectCommand1->Connection = this->oleDbConnection1;
			// 
			// oleDbConnection1
			// 
			this->oleDbConnection1->ConnectionString = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\\Users\\borga\\Desktop\\Проект\\ASTO\\A"
				L"STO\\Database.mdb";
			// 
			// oleDbInsertCommand1
			// 
			this->oleDbInsertCommand1->CommandText = L"INSERT INTO `sotrudniki` (`ФИО`, `Должность`, `Дата рождения`, `Дата приказа`) VA"
				L"LUES (\?, \?, \?, \?)";
			this->oleDbInsertCommand1->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(4) {
				(gcnew System::Data::OleDb::OleDbParameter(L"ФИО",
					System::Data::OleDb::OleDbType::LongVarWChar, 0, L"ФИО")), (gcnew System::Data::OleDb::OleDbParameter(L"Должность", System::Data::OleDb::OleDbType::LongVarWChar,
						0, L"Должность")), (gcnew System::Data::OleDb::OleDbParameter(L"Дата_рождения", System::Data::OleDb::OleDbType::Date, 0,
							L"Дата рождения")), (gcnew System::Data::OleDb::OleDbParameter(L"Дата_приказа", System::Data::OleDb::OleDbType::LongVarWChar,
								0, L"Дата приказа"))
			});
			// 
			// oleDbUpdateCommand1
			// 
			this->oleDbUpdateCommand1->CommandText = L"UPDATE `sotrudniki` SET `ФИО` = \?, `Должность` = \?, `Дата рождения` = \?, `Дата пр"
				L"иказа` = \? WHERE ((`ID` = \?) AND ((\? = 1 AND `Дата рождения` IS NULL) OR (`Дата "
				L"рождения` = \?)))";
			this->oleDbUpdateCommand1->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(7) {
				(gcnew System::Data::OleDb::OleDbParameter(L"ФИО",
					System::Data::OleDb::OleDbType::LongVarWChar, 0, L"ФИО")), (gcnew System::Data::OleDb::OleDbParameter(L"Должность", System::Data::OleDb::OleDbType::LongVarWChar,
						0, L"Должность")), (gcnew System::Data::OleDb::OleDbParameter(L"Дата_рождения", System::Data::OleDb::OleDbType::Date, 0,
							L"Дата рождения")), (gcnew System::Data::OleDb::OleDbParameter(L"Дата_приказа", System::Data::OleDb::OleDbType::LongVarWChar,
								0, L"Дата приказа")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ID", System::Data::OleDb::OleDbType::Integer,
									0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ID", System::Data::DataRowVersion::Original,
									nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Дата_рождения", System::Data::OleDb::OleDbType::Integer, 0,
										System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Дата рождения", System::Data::DataRowVersion::Original,
										true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Дата_рождения", System::Data::OleDb::OleDbType::Date,
											0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Дата рождения",
											System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbDeleteCommand1
			// 
			this->oleDbDeleteCommand1->CommandText = L"DELETE FROM `sotrudniki` WHERE ((`ID` = \?) AND ((\? = 1 AND `Дата рождения` IS NUL"
				L"L) OR (`Дата рождения` = \?)))";
			this->oleDbDeleteCommand1->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(3) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_ID",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"ID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Дата_рождения",
						System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
						L"Дата рождения", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Дата_рождения",
							System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
							L"Дата рождения", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->DeleteCommand = this->oleDbDeleteCommand1;
			this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand1;
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(5) {
				(gcnew System::Data::Common::DataColumnMapping(L"ID",
					L"ID")), (gcnew System::Data::Common::DataColumnMapping(L"ФИО", L"ФИО")), (gcnew System::Data::Common::DataColumnMapping(L"Должность",
						L"Должность")), (gcnew System::Data::Common::DataColumnMapping(L"Дата рождения", L"Дата рождения")), (gcnew System::Data::Common::DataColumnMapping(L"Дата приказа",
							L"Дата приказа"))
			};
			this->oleDbDataAdapter1->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {
				(gcnew System::Data::Common::DataTableMapping(L"Table",
					L"sotrudniki", __mcTemp__1))
			});
			this->oleDbDataAdapter1->UpdateCommand = this->oleDbUpdateCommand1;
			// 
			// comboBox1
			// 
			this->comboBox1->DataSource = this->bindingSource1;
			this->comboBox1->DisplayMember = L"ID";
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(490, 24);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(156, 24);
			this->comboBox1->TabIndex = 5;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->DataBindings->Add((gcnew System::Windows::Forms::Binding(L"Value", this->bindingSource1, L"Дата рождения",
				true)));
			this->dateTimePicker1->Location = System::Drawing::Point(678, 24);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 6;
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"notifyIcon1.Icon")));
			this->notifyIcon1->Text = L"notifyIcon1";
			this->notifyIcon1->Visible = true;
			// 
			// textBox1
			// 
			this->textBox1->DataBindings->Add((gcnew System::Windows::Forms::Binding(L"Text", this->bindingSource1, L"ID", true)));
			this->textBox1->Location = System::Drawing::Point(918, 26);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(203, 22);
			this->textBox1->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1184, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 34);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Печать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click_1);
			// 
			// printDialog1
			// 
			this->printDialog1->Document = this->printDocument1;
			this->printDialog1->UseEXDialog = true;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm5::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->UseAntiAlias = true;
			this->printPreviewDialog1->Visible = false;
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(1300, 642);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->bindingNavigator1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm5";
			this->Text = L"Регистрация новых сотрудников";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm5::MyForm5_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm5::MyForm5_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingNavigator1))->EndInit();
			this->bindingNavigator1->ResumeLayout(false);
			this->bindingNavigator1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		IO::StreamReader^ Читатель;
	private: System::Void MyForm5_Load(System::Object^ sender, System::EventArgs^ e) {
		oleDbDataAdapter1->Fill(dataTable1);
		
	}
private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Application::Exit();
}
private: System::Void главноеМенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Hide();
	obj->Show();
}


private: System::Void MyForm5_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	oleDbDataAdapter1->Update(dataTable1);
}
private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	oleDbDataAdapter1->Update(dataTable1);
}

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	PrintDialog^ printDialog1 = gcnew PrintDialog();
	printDialog1->Document = printDocument1;
	if (printDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
		printDocument1->Print();
}

private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	int hey = 0;
	for (int i = 0; i < (dataGridView1->Rows->Count); i++) {
		hey = hey + dataGridView1->Rows[i]->Height;
	}
	Bitmap^ bmp = gcnew Bitmap(dataGridView1->Size.Width + 15, hey + 15);//немного прибавляем размер
	dataGridView1->DrawToBitmap(bmp, dataGridView1->Bounds);
	String^ drawString = "Какая-то строка";
	System::Drawing::Font^ drawFont = gcnew System::Drawing::Font("Arial", 16);//шрифт
	SolidBrush^ drawBrush = gcnew SolidBrush(Color::Black);//цвет черный
	float x = 100.0F;
	float y = 100.0F;
	float width = 400.0F;//ширина строки
	float height = 50.0F;//высота
	RectangleF drawRect = RectangleF(x, y, width, height);
	e->Graphics->DrawString(drawString, drawFont, drawBrush, drawRect);
	e->Graphics->DrawImage(bmp, 0, 0);
}
};
}
