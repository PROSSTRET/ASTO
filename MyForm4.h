#pragma once

namespace ASTO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		MyForm4(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}
		MyForm4(Form^ objl)
		{
			obj = objl;
			InitializeComponent();


		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;








    private: System::Windows::Forms::BindingSource^ bindingSource1;
    private: System::Data::DataSet^ dataSet1;
    private: System::Data::DataTable^ dataTable1;
    private: System::Data::DataColumn^ dataColumn1;
    private: System::Data::DataColumn^ dataColumn2;
    private: System::Data::DataColumn^ dataColumn3;
    private: System::Data::DataColumn^ dataColumn4;
    private: System::Data::DataColumn^ dataColumn5;
    private: System::Data::DataColumn^ dataColumn6;
    private: System::Windows::Forms::BindingNavigator^ bindingNavigator1;
    private: System::Windows::Forms::ToolStripButton^ bindingNavigatorAddNewItem;
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

    private: System::Windows::Forms::Label^ label1;
    private: System::Data::OleDb::OleDbCommand^ oleDbSelectCommand1;
    private: System::Data::OleDb::OleDbConnection^ oleDbConnection1;
    private: System::Data::OleDb::OleDbCommand^ oleDbInsertCommand1;
    private: System::Data::OleDb::OleDbCommand^ oleDbUpdateCommand1;
    private: System::Data::OleDb::OleDbCommand^ oleDbDeleteCommand1;
    private: System::Data::OleDb::OleDbDataAdapter^ oleDbDataAdapter1;
    private: System::Windows::Forms::ComboBox^ comboBox1;
    private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
    private: System::Drawing::Printing::PrintDocument^ printDocument1;
    private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
    private: System::Windows::Forms::PrintDialog^ printDialog1;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::NotifyIcon^ notifyIcon1;
    private: System::Data::DataColumn^ dataColumn7;
    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ ���������DataGridViewTextBoxColumn;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ ���������������DataGridViewTextBoxColumn;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ ������DataGridViewTextBoxColumn;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ ������������DataGridViewTextBoxColumn;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ �����������������DataGridViewTextBoxColumn;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ �������DataGridViewTextBoxColumn;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ ���������DataGridViewTextBoxColumn;
    private: System::ComponentModel::IContainer^ components;




	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
            this->components = (gcnew System::ComponentModel::Container());
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm4::typeid));
            this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
            this->dataSet1 = (gcnew System::Data::DataSet());
            this->dataTable1 = (gcnew System::Data::DataTable());
            this->dataColumn1 = (gcnew System::Data::DataColumn());
            this->dataColumn2 = (gcnew System::Data::DataColumn());
            this->dataColumn3 = (gcnew System::Data::DataColumn());
            this->dataColumn4 = (gcnew System::Data::DataColumn());
            this->dataColumn5 = (gcnew System::Data::DataColumn());
            this->dataColumn6 = (gcnew System::Data::DataColumn());
            this->dataColumn7 = (gcnew System::Data::DataColumn());
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->bindingNavigator1 = (gcnew System::Windows::Forms::BindingNavigator(this->components));
            this->bindingNavigatorAddNewItem = (gcnew System::Windows::Forms::ToolStripButton());
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
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
            this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
            this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
            this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
            this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
            this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
            this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
            this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
            this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->���������DataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->���������������DataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->������DataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->������������DataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->�����������������DataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->�������DataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->���������DataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->BeginInit();
            this->menuStrip1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingNavigator1))->BeginInit();
            this->bindingNavigator1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->SuspendLayout();
            // 
            // bindingSource1
            // 
            this->bindingSource1->DataMember = L"Sale";
            this->bindingSource1->DataSource = this->dataSet1;
            // 
            // dataSet1
            // 
            this->dataSet1->DataSetName = L"NewDataSet";
            this->dataSet1->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) { this->dataTable1 });
            // 
            // dataTable1
            // 
            this->dataTable1->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(7) {
                this->dataColumn1, this->dataColumn2,
                    this->dataColumn3, this->dataColumn4, this->dataColumn5, this->dataColumn6, this->dataColumn7
            });
            this->dataTable1->TableName = L"Sale";
            // 
            // dataColumn1
            // 
            this->dataColumn1->ColumnName = L"��� ������";
            // 
            // dataColumn2
            // 
            this->dataColumn2->ColumnName = L"����� ����������";
            // 
            // dataColumn3
            // 
            this->dataColumn3->ColumnName = L"������";
            // 
            // dataColumn4
            // 
            this->dataColumn4->ColumnName = L"���� ��������";
            // 
            // dataColumn5
            // 
            this->dataColumn5->ColumnName = L"��� ��������������";
            // 
            // dataColumn6
            // 
            this->dataColumn6->ColumnName = L"�������";
            // 
            // dataColumn7
            // 
            this->dataColumn7->ColumnName = L"���������";
            // 
            // menuStrip1
            // 
            this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->��������ToolStripMenuItem });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(1061, 30);
            this->menuStrip1->TabIndex = 1;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // ��������ToolStripMenuItem
            // 
            this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�����ToolStripMenuItem });
            this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
            this->��������ToolStripMenuItem->Size = System::Drawing::Size(88, 26);
            this->��������ToolStripMenuItem->Text = L"��������";
            // 
            // �����ToolStripMenuItem
            // 
            this->�����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->����ToolStripMenuItem });
            this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
            this->�����ToolStripMenuItem->Size = System::Drawing::Size(134, 26);
            this->�����ToolStripMenuItem->Text = L"�����";
            // 
            // ����ToolStripMenuItem
            // 
            this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
            this->����ToolStripMenuItem->Size = System::Drawing::Size(134, 26);
            this->����ToolStripMenuItem->Text = L"����";
            this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm4::����ToolStripMenuItem_Click);
            // 
            // bindingNavigator1
            // 
            this->bindingNavigator1->AddNewItem = this->bindingNavigatorAddNewItem;
            this->bindingNavigator1->BindingSource = this->bindingSource1;
            this->bindingNavigator1->CountItem = this->bindingNavigatorCountItem;
            this->bindingNavigator1->DeleteItem = this->bindingNavigatorDeleteItem;
            this->bindingNavigator1->ImageScalingSize = System::Drawing::Size(20, 20);
            this->bindingNavigator1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {
                this->bindingNavigatorMoveFirstItem,
                    this->bindingNavigatorMovePreviousItem, this->bindingNavigatorSeparator, this->bindingNavigatorPositionItem, this->bindingNavigatorCountItem,
                    this->bindingNavigatorSeparator1, this->bindingNavigatorMoveNextItem, this->bindingNavigatorMoveLastItem, this->bindingNavigatorSeparator2,
                    this->bindingNavigatorAddNewItem, this->bindingNavigatorDeleteItem, this->toolStripButton1
            });
            this->bindingNavigator1->Location = System::Drawing::Point(0, 30);
            this->bindingNavigator1->MoveFirstItem = this->bindingNavigatorMoveFirstItem;
            this->bindingNavigator1->MoveLastItem = this->bindingNavigatorMoveLastItem;
            this->bindingNavigator1->MoveNextItem = this->bindingNavigatorMoveNextItem;
            this->bindingNavigator1->MovePreviousItem = this->bindingNavigatorMovePreviousItem;
            this->bindingNavigator1->Name = L"bindingNavigator1";
            this->bindingNavigator1->PositionItem = this->bindingNavigatorPositionItem;
            this->bindingNavigator1->Size = System::Drawing::Size(1061, 31);
            this->bindingNavigator1->TabIndex = 2;
            this->bindingNavigator1->Text = L"bindingNavigator1";
            // 
            // bindingNavigatorAddNewItem
            // 
            this->bindingNavigatorAddNewItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
            this->bindingNavigatorAddNewItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorAddNewItem.Image")));
            this->bindingNavigatorAddNewItem->Name = L"bindingNavigatorAddNewItem";
            this->bindingNavigatorAddNewItem->RightToLeftAutoMirrorImage = true;
            this->bindingNavigatorAddNewItem->Size = System::Drawing::Size(29, 28);
            this->bindingNavigatorAddNewItem->Text = L"��������";
            // 
            // bindingNavigatorCountItem
            // 
            this->bindingNavigatorCountItem->Name = L"bindingNavigatorCountItem";
            this->bindingNavigatorCountItem->Size = System::Drawing::Size(45, 28);
            this->bindingNavigatorCountItem->Text = L"of {0}";
            this->bindingNavigatorCountItem->ToolTipText = L"����� ����� ���������";
            // 
            // bindingNavigatorDeleteItem
            // 
            this->bindingNavigatorDeleteItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
            this->bindingNavigatorDeleteItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorDeleteItem.Image")));
            this->bindingNavigatorDeleteItem->Name = L"bindingNavigatorDeleteItem";
            this->bindingNavigatorDeleteItem->RightToLeftAutoMirrorImage = true;
            this->bindingNavigatorDeleteItem->Size = System::Drawing::Size(29, 28);
            this->bindingNavigatorDeleteItem->Text = L"�������";
            // 
            // bindingNavigatorMoveFirstItem
            // 
            this->bindingNavigatorMoveFirstItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
            this->bindingNavigatorMoveFirstItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveFirstItem.Image")));
            this->bindingNavigatorMoveFirstItem->Name = L"bindingNavigatorMoveFirstItem";
            this->bindingNavigatorMoveFirstItem->RightToLeftAutoMirrorImage = true;
            this->bindingNavigatorMoveFirstItem->Size = System::Drawing::Size(29, 28);
            this->bindingNavigatorMoveFirstItem->Text = L"����������� � ������";
            // 
            // bindingNavigatorMovePreviousItem
            // 
            this->bindingNavigatorMovePreviousItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
            this->bindingNavigatorMovePreviousItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMovePreviousItem.Image")));
            this->bindingNavigatorMovePreviousItem->Name = L"bindingNavigatorMovePreviousItem";
            this->bindingNavigatorMovePreviousItem->RightToLeftAutoMirrorImage = true;
            this->bindingNavigatorMovePreviousItem->Size = System::Drawing::Size(29, 28);
            this->bindingNavigatorMovePreviousItem->Text = L"����������� �����";
            // 
            // bindingNavigatorSeparator
            // 
            this->bindingNavigatorSeparator->Name = L"bindingNavigatorSeparator";
            this->bindingNavigatorSeparator->Size = System::Drawing::Size(6, 31);
            // 
            // bindingNavigatorPositionItem
            // 
            this->bindingNavigatorPositionItem->AccessibleName = L"���������";
            this->bindingNavigatorPositionItem->AutoSize = false;
            this->bindingNavigatorPositionItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
            this->bindingNavigatorPositionItem->Name = L"bindingNavigatorPositionItem";
            this->bindingNavigatorPositionItem->Size = System::Drawing::Size(50, 27);
            this->bindingNavigatorPositionItem->Text = L"0";
            this->bindingNavigatorPositionItem->ToolTipText = L"������� ���������";
            // 
            // bindingNavigatorSeparator1
            // 
            this->bindingNavigatorSeparator1->Name = L"bindingNavigatorSeparator1";
            this->bindingNavigatorSeparator1->Size = System::Drawing::Size(6, 31);
            // 
            // bindingNavigatorMoveNextItem
            // 
            this->bindingNavigatorMoveNextItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
            this->bindingNavigatorMoveNextItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveNextItem.Image")));
            this->bindingNavigatorMoveNextItem->Name = L"bindingNavigatorMoveNextItem";
            this->bindingNavigatorMoveNextItem->RightToLeftAutoMirrorImage = true;
            this->bindingNavigatorMoveNextItem->Size = System::Drawing::Size(29, 28);
            this->bindingNavigatorMoveNextItem->Text = L"����������� ������";
            // 
            // bindingNavigatorMoveLastItem
            // 
            this->bindingNavigatorMoveLastItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
            this->bindingNavigatorMoveLastItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveLastItem.Image")));
            this->bindingNavigatorMoveLastItem->Name = L"bindingNavigatorMoveLastItem";
            this->bindingNavigatorMoveLastItem->RightToLeftAutoMirrorImage = true;
            this->bindingNavigatorMoveLastItem->Size = System::Drawing::Size(29, 28);
            this->bindingNavigatorMoveLastItem->Text = L"����������� � �����";
            // 
            // bindingNavigatorSeparator2
            // 
            this->bindingNavigatorSeparator2->Name = L"bindingNavigatorSeparator2";
            this->bindingNavigatorSeparator2->Size = System::Drawing::Size(6, 31);
            // 
            // toolStripButton1
            // 
            this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
            this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
            this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
            this->toolStripButton1->Name = L"toolStripButton1";
            this->toolStripButton1->Size = System::Drawing::Size(29, 28);
            this->toolStripButton1->Text = L"���������";
            this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm4::toolStripButton1_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(352, 66);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(100, 16);
            this->label1->TabIndex = 4;
            this->label1->Text = L"����� �� ����";
            // 
            // oleDbSelectCommand1
            // 
            this->oleDbSelectCommand1->CommandText = L"SELECT Sale.*\r\nFROM     Sale";
            this->oleDbSelectCommand1->Connection = this->oleDbConnection1;
            // 
            // oleDbConnection1
            // 
            this->oleDbConnection1->ConnectionString = L"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=\"C:\\Users\\borga\\Desktop\\������� ���"
                L"��\\������\\Database.accdb\"";
            // 
            // oleDbInsertCommand1
            // 
            this->oleDbInsertCommand1->CommandText = L"INSERT INTO `Sale` (`��� ������`, `����� ����������`, `������`, `���� ��������`, "
                L"`��� ��������������`, `�������`, `���������`) VALUES (\?, \?, \?, \?, \?, \?, \?)";
            this->oleDbInsertCommand1->Connection = this->oleDbConnection1;
            this->oleDbInsertCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(7) {
                (gcnew System::Data::OleDb::OleDbParameter(L"���_������",
                    System::Data::OleDb::OleDbType::Integer, 0, L"��� ������")), (gcnew System::Data::OleDb::OleDbParameter(L"�����_����������",
                        System::Data::OleDb::OleDbType::Date, 0, L"����� ����������")), (gcnew System::Data::OleDb::OleDbParameter(L"������", System::Data::OleDb::OleDbType::VarWChar,
                            0, L"������")), (gcnew System::Data::OleDb::OleDbParameter(L"����_��������", System::Data::OleDb::OleDbType::Date, 0, L"���� ��������")),
                    (gcnew System::Data::OleDb::OleDbParameter(L"���_��������������", System::Data::OleDb::OleDbType::Integer, 0, L"��� ��������������")),
                    (gcnew System::Data::OleDb::OleDbParameter(L"�������", System::Data::OleDb::OleDbType::VarWChar, 0, L"�������")), (gcnew System::Data::OleDb::OleDbParameter(L"���������",
                        System::Data::OleDb::OleDbType::Currency, 0, L"���������"))
            });
            // 
            // oleDbUpdateCommand1
            // 
            this->oleDbUpdateCommand1->CommandText = resources->GetString(L"oleDbUpdateCommand1.CommandText");
            this->oleDbUpdateCommand1->Connection = this->oleDbConnection1;
            this->oleDbUpdateCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(20) {
                (gcnew System::Data::OleDb::OleDbParameter(L"���_������",
                    System::Data::OleDb::OleDbType::Integer, 0, L"��� ������")), (gcnew System::Data::OleDb::OleDbParameter(L"�����_����������",
                        System::Data::OleDb::OleDbType::Date, 0, L"����� ����������")), (gcnew System::Data::OleDb::OleDbParameter(L"������", System::Data::OleDb::OleDbType::VarWChar,
                            0, L"������")), (gcnew System::Data::OleDb::OleDbParameter(L"����_��������", System::Data::OleDb::OleDbType::Date, 0, L"���� ��������")),
                    (gcnew System::Data::OleDb::OleDbParameter(L"���_��������������", System::Data::OleDb::OleDbType::Integer, 0, L"��� ��������������")),
                    (gcnew System::Data::OleDb::OleDbParameter(L"�������", System::Data::OleDb::OleDbType::VarWChar, 0, L"�������")), (gcnew System::Data::OleDb::OleDbParameter(L"���������",
                        System::Data::OleDb::OleDbType::Currency, 0, L"���������")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_���_������",
                            System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                            static_cast<System::Byte>(0), L"��� ������", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_�����_����������",
                                System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                L"����� ����������", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_�����_����������",
                                    System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                    L"����� ����������", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_������",
                                        System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                        L"������", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_������",
                                            System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                            static_cast<System::Byte>(0), L"������", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_����_��������",
                                                System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                L"���� ��������", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_����_��������",
                                                    System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                    L"���� ��������", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_���_��������������",
                                                        System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                        L"��� ��������������", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_���_��������������",
                                                            System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                                            static_cast<System::Byte>(0), L"��� ��������������", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_�������",
                                                                System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                                L"�������", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_�������",
                                                                    System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                                                    static_cast<System::Byte>(0), L"�������", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_���������",
                                                                        System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                                        L"���������", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_���������",
                                                                            System::Data::OleDb::OleDbType::Currency, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                                                            static_cast<System::Byte>(0), L"���������", System::Data::DataRowVersion::Original, nullptr))
            });
            // 
            // oleDbDeleteCommand1
            // 
            this->oleDbDeleteCommand1->CommandText = resources->GetString(L"oleDbDeleteCommand1.CommandText");
            this->oleDbDeleteCommand1->Connection = this->oleDbConnection1;
            this->oleDbDeleteCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(13) {
                (gcnew System::Data::OleDb::OleDbParameter(L"Original_���_������",
                    System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                    static_cast<System::Byte>(0), L"��� ������", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_�����_����������",
                        System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                        L"����� ����������", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_�����_����������",
                            System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                            L"����� ����������", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_������",
                                System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                L"������", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_������",
                                    System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                    static_cast<System::Byte>(0), L"������", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_����_��������",
                                        System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                        L"���� ��������", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_����_��������",
                                            System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                            L"���� ��������", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_���_��������������",
                                                System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                L"��� ��������������", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_���_��������������",
                                                    System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                                    static_cast<System::Byte>(0), L"��� ��������������", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_�������",
                                                        System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                        L"�������", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_�������",
                                                            System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                                            static_cast<System::Byte>(0), L"�������", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_���������",
                                                                System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
                                                                L"���������", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_���������",
                                                                    System::Data::OleDb::OleDbType::Currency, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
                                                                    static_cast<System::Byte>(0), L"���������", System::Data::DataRowVersion::Original, nullptr))
            });
            // 
            // oleDbDataAdapter1
            // 
            this->oleDbDataAdapter1->DeleteCommand = this->oleDbDeleteCommand1;
            this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand1;
            this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
            cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(7) {
                (gcnew System::Data::Common::DataColumnMapping(L"��� ������",
                    L"��� ������")), (gcnew System::Data::Common::DataColumnMapping(L"����� ����������", L"����� ����������")), (gcnew System::Data::Common::DataColumnMapping(L"������",
                        L"������")), (gcnew System::Data::Common::DataColumnMapping(L"���� ��������", L"���� ��������")), (gcnew System::Data::Common::DataColumnMapping(L"��� ��������������",
                            L"��� ��������������")), (gcnew System::Data::Common::DataColumnMapping(L"�������", L"�������")), (gcnew System::Data::Common::DataColumnMapping(L"���������",
                                L"���������"))
            };
            this->oleDbDataAdapter1->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {
                (gcnew System::Data::Common::DataTableMapping(L"Table",
                    L"Sale", __mcTemp__1))
            });
            this->oleDbDataAdapter1->UpdateCommand = this->oleDbUpdateCommand1;
            // 
            // comboBox1
            // 
            this->comboBox1->DataSource = this->bindingSource1;
            this->comboBox1->DisplayMember = L"��� ������";
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Location = System::Drawing::Point(43, 66);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(294, 24);
            this->comboBox1->TabIndex = 5;
            // 
            // dateTimePicker1
            // 
            this->dateTimePicker1->DataBindings->Add((gcnew System::Windows::Forms::Binding(L"Value", this->bindingSource1, L"����� ����������",
                true)));
            this->dateTimePicker1->Location = System::Drawing::Point(473, 64);
            this->dateTimePicker1->Name = L"dateTimePicker1";
            this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
            this->dateTimePicker1->TabIndex = 6;
            // 
            // printDocument1
            // 
            this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm4::printDocument1_PrintPage);
            // 
            // printPreviewDialog1
            // 
            this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
            this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
            this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
            this->printPreviewDialog1->Enabled = true;
            this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
            this->printPreviewDialog1->Name = L"printPreviewDialog1";
            this->printPreviewDialog1->Visible = false;
            // 
            // printDialog1
            // 
            this->printDialog1->UseEXDialog = true;
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(850, 59);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(170, 31);
            this->button1->TabIndex = 7;
            this->button1->Text = L"������";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
            // 
            // notifyIcon1
            // 
            this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"notifyIcon1.Icon")));
            this->notifyIcon1->Text = L"notifyIcon1";
            this->notifyIcon1->Visible = true;
            // 
            // dataGridView1
            // 
            this->dataGridView1->AutoGenerateColumns = false;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
                this->���������DataGridViewTextBoxColumn,
                    this->���������������DataGridViewTextBoxColumn, this->������DataGridViewTextBoxColumn, this->������������DataGridViewTextBoxColumn,
                    this->�����������������DataGridViewTextBoxColumn, this->�������DataGridViewTextBoxColumn, this->���������DataGridViewTextBoxColumn
            });
            this->dataGridView1->DataSource = this->bindingSource1;
            this->dataGridView1->Location = System::Drawing::Point(13, 116);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersWidth = 51;
            this->dataGridView1->RowTemplate->Height = 24;
            this->dataGridView1->Size = System::Drawing::Size(1036, 465);
            this->dataGridView1->TabIndex = 8;
            // 
            // ���������DataGridViewTextBoxColumn
            // 
            this->���������DataGridViewTextBoxColumn->DataPropertyName = L"��� ������";
            this->���������DataGridViewTextBoxColumn->HeaderText = L"��� ������";
            this->���������DataGridViewTextBoxColumn->MinimumWidth = 6;
            this->���������DataGridViewTextBoxColumn->Name = L"���������DataGridViewTextBoxColumn";
            this->���������DataGridViewTextBoxColumn->Width = 125;
            // 
            // ���������������DataGridViewTextBoxColumn
            // 
            this->���������������DataGridViewTextBoxColumn->DataPropertyName = L"����� ����������";
            this->���������������DataGridViewTextBoxColumn->HeaderText = L"����� ����������";
            this->���������������DataGridViewTextBoxColumn->MinimumWidth = 6;
            this->���������������DataGridViewTextBoxColumn->Name = L"���������������DataGridViewTextBoxColumn";
            this->���������������DataGridViewTextBoxColumn->Width = 125;
            // 
            // ������DataGridViewTextBoxColumn
            // 
            this->������DataGridViewTextBoxColumn->DataPropertyName = L"������";
            this->������DataGridViewTextBoxColumn->HeaderText = L"������";
            this->������DataGridViewTextBoxColumn->MinimumWidth = 6;
            this->������DataGridViewTextBoxColumn->Name = L"������DataGridViewTextBoxColumn";
            this->������DataGridViewTextBoxColumn->Width = 125;
            // 
            // ������������DataGridViewTextBoxColumn
            // 
            this->������������DataGridViewTextBoxColumn->DataPropertyName = L"���� ��������";
            this->������������DataGridViewTextBoxColumn->HeaderText = L"���� ��������";
            this->������������DataGridViewTextBoxColumn->MinimumWidth = 6;
            this->������������DataGridViewTextBoxColumn->Name = L"������������DataGridViewTextBoxColumn";
            this->������������DataGridViewTextBoxColumn->Width = 125;
            // 
            // �����������������DataGridViewTextBoxColumn
            // 
            this->�����������������DataGridViewTextBoxColumn->DataPropertyName = L"��� ��������������";
            this->�����������������DataGridViewTextBoxColumn->HeaderText = L"��� ��������������";
            this->�����������������DataGridViewTextBoxColumn->MinimumWidth = 6;
            this->�����������������DataGridViewTextBoxColumn->Name = L"�����������������DataGridViewTextBoxColumn";
            this->�����������������DataGridViewTextBoxColumn->Width = 125;
            // 
            // �������DataGridViewTextBoxColumn
            // 
            this->�������DataGridViewTextBoxColumn->DataPropertyName = L"�������";
            this->�������DataGridViewTextBoxColumn->HeaderText = L"�������";
            this->�������DataGridViewTextBoxColumn->MinimumWidth = 6;
            this->�������DataGridViewTextBoxColumn->Name = L"�������DataGridViewTextBoxColumn";
            this->�������DataGridViewTextBoxColumn->Width = 125;
            // 
            // ���������DataGridViewTextBoxColumn
            // 
            this->���������DataGridViewTextBoxColumn->DataPropertyName = L"���������";
            this->���������DataGridViewTextBoxColumn->HeaderText = L"���������";
            this->���������DataGridViewTextBoxColumn->MinimumWidth = 6;
            this->���������DataGridViewTextBoxColumn->Name = L"���������DataGridViewTextBoxColumn";
            this->���������DataGridViewTextBoxColumn->Width = 125;
            // 
            // MyForm4
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->ClientSize = System::Drawing::Size(1061, 605);
            this->Controls->Add(this->dataGridView1);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->dateTimePicker1);
            this->Controls->Add(this->comboBox1);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->bindingNavigator1);
            this->Controls->Add(this->menuStrip1);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->MainMenuStrip = this->menuStrip1;
            this->Name = L"MyForm4";
            this->Text = L"Sale";
            this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm4::MyForm4_FormClosing);
            this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->EndInit();
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingNavigator1))->EndInit();
            this->bindingNavigator1->ResumeLayout(false);
            this->bindingNavigator1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
private: System::Void ����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Hide();
	obj->Show();
}
private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e) {
    oleDbDataAdapter1->Fill(dataTable1);
}
private: System::Void MyForm4_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
    oleDbDataAdapter1->Update(dataTable1);
}
private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
    oleDbDataAdapter1->Update(dataTable1);
}
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
    int hey = 0;
    for (int i = 0; i < (dataGridView1->Rows->Count); i++) {
        hey = hey + dataGridView1->Rows[i]->Height;
    }
    Bitmap^ bmp = gcnew Bitmap(dataGridView1->Size.Width + 150, hey + 150);//������� ���������� ������
    dataGridView1->DrawToBitmap(bmp, dataGridView1->Bounds);
    String^ drawString = "�����-�� ������";
    System::Drawing::Font^ drawFont = gcnew System::Drawing::Font("Arial", 16);//�����
    SolidBrush^ drawBrush = gcnew SolidBrush(Color::Black);//���� ������
    float x = 100.0F;
    float y = 100.0F;
    float width = 400.0F;//������ ������
    float height = 50.0F;//������
    RectangleF drawRect = RectangleF(x, y, width, height);
    e->Graphics->DrawString(drawString, drawFont, drawBrush, drawRect);
    e->Graphics->DrawImage(bmp, 0, 0);

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    PrintDialog^ printDialog1 = gcnew PrintDialog();
    printDialog1->Document = printDocument1;
    if (printDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
        printDocument1->Print();

}
};
}
