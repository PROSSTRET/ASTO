#pragma once

namespace ASTO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm6
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		MyForm6(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}
		MyForm6(Form^ objl)
		{
			obj = objl;
			InitializeComponent();

		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ToolStripMenuItem^ äåéñòâèÿToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Data::DataSet^ dataSet1;
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
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Data::OleDb::OleDbCommand^ oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbCommand^ oleDbInsertCommand1;
	private: System::Data::OleDb::OleDbCommand^ oleDbUpdateCommand1;
	private: System::Data::OleDb::OleDbCommand^ oleDbDeleteCommand1;
	private: System::Data::OleDb::OleDbDataAdapter^ oleDbDataAdapter1;






	private: System::Data::DataTable^ dataTable1;
	private: System::Data::DataColumn^ dataColumn1;
	private: System::Data::DataColumn^ dataColumn2;
	private: System::Data::DataColumn^ dataColumn3;
	private: System::Data::DataColumn^ dataColumn4;
	private: System::Data::DataColumn^ dataColumn5;
	private: System::Data::OleDb::OleDbConnection^ oleDbConnection1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ êîäDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ òîâàğDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ äåòàëüDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ êîëâîDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ öåíàDataGridViewTextBoxColumn;
	private: System::Windows::Forms::BindingSource^ nakladnayaBindingSource;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::BindingSource^ nakladnayaBindingSource1;
	private: System::Windows::Forms::NotifyIcon^ notifyIcon1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
	private: System::Windows::Forms::PrintDialog^ printDialog1;

	private: System::ComponentModel::IContainer^ components;
	protected:








	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm6::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->êîäDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->òîâàğDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->äåòàëüDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->êîëâîDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->öåíàDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nakladnayaBindingSource = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->dataTable1 = (gcnew System::Data::DataTable());
			this->dataColumn1 = (gcnew System::Data::DataColumn());
			this->dataColumn2 = (gcnew System::Data::DataColumn());
			this->dataColumn3 = (gcnew System::Data::DataColumn());
			this->dataColumn4 = (gcnew System::Data::DataColumn());
			this->dataColumn5 = (gcnew System::Data::DataColumn());
			this->äåéñòâèÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
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
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->nakladnayaBindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nakladnayaBindingSource))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->BeginInit();
			this->menuStrip2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingNavigator1))->BeginInit();
			this->bindingNavigator1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nakladnayaBindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoGenerateColumns = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->êîäDataGridViewTextBoxColumn,
					this->òîâàğDataGridViewTextBoxColumn, this->äåòàëüDataGridViewTextBoxColumn, this->êîëâîDataGridViewTextBoxColumn, this->öåíàDataGridViewTextBoxColumn
			});
			this->dataGridView1->DataSource = this->nakladnayaBindingSource;
			this->dataGridView1->Location = System::Drawing::Point(12, 67);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(989, 442);
			this->dataGridView1->TabIndex = 0;
			// 
			// êîäDataGridViewTextBoxColumn
			// 
			this->êîäDataGridViewTextBoxColumn->DataPropertyName = L"Êîä";
			this->êîäDataGridViewTextBoxColumn->HeaderText = L"Êîä";
			this->êîäDataGridViewTextBoxColumn->MinimumWidth = 6;
			this->êîäDataGridViewTextBoxColumn->Name = L"êîäDataGridViewTextBoxColumn";
			this->êîäDataGridViewTextBoxColumn->Width = 125;
			// 
			// òîâàğDataGridViewTextBoxColumn
			// 
			this->òîâàğDataGridViewTextBoxColumn->DataPropertyName = L"Òîâàğ";
			this->òîâàğDataGridViewTextBoxColumn->HeaderText = L"Òîâàğ";
			this->òîâàğDataGridViewTextBoxColumn->MinimumWidth = 6;
			this->òîâàğDataGridViewTextBoxColumn->Name = L"òîâàğDataGridViewTextBoxColumn";
			this->òîâàğDataGridViewTextBoxColumn->Width = 125;
			// 
			// äåòàëüDataGridViewTextBoxColumn
			// 
			this->äåòàëüDataGridViewTextBoxColumn->DataPropertyName = L"Äåòàëü";
			this->äåòàëüDataGridViewTextBoxColumn->HeaderText = L"Äåòàëü";
			this->äåòàëüDataGridViewTextBoxColumn->MinimumWidth = 6;
			this->äåòàëüDataGridViewTextBoxColumn->Name = L"äåòàëüDataGridViewTextBoxColumn";
			this->äåòàëüDataGridViewTextBoxColumn->Width = 125;
			// 
			// êîëâîDataGridViewTextBoxColumn
			// 
			this->êîëâîDataGridViewTextBoxColumn->DataPropertyName = L"Êîë-âî";
			this->êîëâîDataGridViewTextBoxColumn->HeaderText = L"Êîë-âî";
			this->êîëâîDataGridViewTextBoxColumn->MinimumWidth = 6;
			this->êîëâîDataGridViewTextBoxColumn->Name = L"êîëâîDataGridViewTextBoxColumn";
			this->êîëâîDataGridViewTextBoxColumn->Width = 125;
			// 
			// öåíàDataGridViewTextBoxColumn
			// 
			this->öåíàDataGridViewTextBoxColumn->DataPropertyName = L"Öåíà";
			this->öåíàDataGridViewTextBoxColumn->HeaderText = L"Öåíà";
			this->öåíàDataGridViewTextBoxColumn->MinimumWidth = 6;
			this->öåíàDataGridViewTextBoxColumn->Name = L"öåíàDataGridViewTextBoxColumn";
			this->öåíàDataGridViewTextBoxColumn->Width = 125;
			// 
			// nakladnayaBindingSource
			// 
			this->nakladnayaBindingSource->DataMember = L"Nakladnaya";
			this->nakladnayaBindingSource->DataSource = this->bindingSource1;
			// 
			// bindingSource1
			// 
			this->bindingSource1->DataSource = this->dataSet1;
			this->bindingSource1->Position = 0;
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
			this->dataTable1->TableName = L"Nakladnaya";
			// 
			// dataColumn1
			// 
			this->dataColumn1->ColumnName = L"Êîä";
			// 
			// dataColumn2
			// 
			this->dataColumn2->ColumnName = L"Òîâàğ";
			// 
			// dataColumn3
			// 
			this->dataColumn3->ColumnName = L"Äåòàëü";
			// 
			// dataColumn4
			// 
			this->dataColumn4->ColumnName = L"Êîë-âî";
			// 
			// dataColumn5
			// 
			this->dataColumn5->ColumnName = L"Öåíà";
			// 
			// äåéñòâèÿToolStripMenuItem
			// 
			this->äåéñòâèÿToolStripMenuItem->Name = L"äåéñòâèÿToolStripMenuItem";
			this->äåéñòâèÿToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->äåéñòâèÿToolStripMenuItem->Text = L"Ìåíş";
			this->äåéñòâèÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm6::äåéñòâèÿToolStripMenuItem_Click);
			// 
			// menuStrip2
			// 
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->äåéñòâèÿToolStripMenuItem });
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(1013, 28);
			this->menuStrip2->TabIndex = 2;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// bindingNavigator1
			// 
			this->bindingNavigator1->AddNewItem = this->bindingNavigatorAddNewItem;
			this->bindingNavigator1->BindingSource = this->nakladnayaBindingSource;
			this->bindingNavigator1->CountItem = this->bindingNavigatorCountItem;
			this->bindingNavigator1->DeleteItem = this->bindingNavigatorDeleteItem;
			this->bindingNavigator1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->bindingNavigator1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {
				this->bindingNavigatorMoveFirstItem,
					this->bindingNavigatorMovePreviousItem, this->bindingNavigatorSeparator, this->bindingNavigatorPositionItem, this->bindingNavigatorCountItem,
					this->bindingNavigatorSeparator1, this->bindingNavigatorMoveNextItem, this->bindingNavigatorMoveLastItem, this->bindingNavigatorSeparator2,
					this->bindingNavigatorAddNewItem, this->bindingNavigatorDeleteItem, this->toolStripButton1
			});
			this->bindingNavigator1->Location = System::Drawing::Point(0, 28);
			this->bindingNavigator1->MoveFirstItem = this->bindingNavigatorMoveFirstItem;
			this->bindingNavigator1->MoveLastItem = this->bindingNavigatorMoveLastItem;
			this->bindingNavigator1->MoveNextItem = this->bindingNavigatorMoveNextItem;
			this->bindingNavigator1->MovePreviousItem = this->bindingNavigatorMovePreviousItem;
			this->bindingNavigator1->Name = L"bindingNavigator1";
			this->bindingNavigator1->PositionItem = this->bindingNavigatorPositionItem;
			this->bindingNavigator1->Size = System::Drawing::Size(1013, 27);
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
			this->bindingNavigatorAddNewItem->Text = L"Äîáàâèòü";
			// 
			// bindingNavigatorCountItem
			// 
			this->bindingNavigatorCountItem->Name = L"bindingNavigatorCountItem";
			this->bindingNavigatorCountItem->Size = System::Drawing::Size(55, 24);
			this->bindingNavigatorCountItem->Text = L"äëÿ {0}";
			this->bindingNavigatorCountItem->ToolTipText = L"Îáùåå ÷èñëî ıëåìåíòîâ";
			// 
			// bindingNavigatorDeleteItem
			// 
			this->bindingNavigatorDeleteItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorDeleteItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorDeleteItem.Image")));
			this->bindingNavigatorDeleteItem->Name = L"bindingNavigatorDeleteItem";
			this->bindingNavigatorDeleteItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorDeleteItem->Size = System::Drawing::Size(29, 24);
			this->bindingNavigatorDeleteItem->Text = L"Óäàëèòü";
			// 
			// bindingNavigatorMoveFirstItem
			// 
			this->bindingNavigatorMoveFirstItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMoveFirstItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveFirstItem.Image")));
			this->bindingNavigatorMoveFirstItem->Name = L"bindingNavigatorMoveFirstItem";
			this->bindingNavigatorMoveFirstItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMoveFirstItem->Size = System::Drawing::Size(29, 24);
			this->bindingNavigatorMoveFirstItem->Text = L"Ïåğåìåñòèòü â íà÷àëî";
			// 
			// bindingNavigatorMovePreviousItem
			// 
			this->bindingNavigatorMovePreviousItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMovePreviousItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMovePreviousItem.Image")));
			this->bindingNavigatorMovePreviousItem->Name = L"bindingNavigatorMovePreviousItem";
			this->bindingNavigatorMovePreviousItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMovePreviousItem->Size = System::Drawing::Size(29, 24);
			this->bindingNavigatorMovePreviousItem->Text = L"Ïåğåìåñòèòü íàçàä";
			// 
			// bindingNavigatorSeparator
			// 
			this->bindingNavigatorSeparator->Name = L"bindingNavigatorSeparator";
			this->bindingNavigatorSeparator->Size = System::Drawing::Size(6, 27);
			// 
			// bindingNavigatorPositionItem
			// 
			this->bindingNavigatorPositionItem->AccessibleName = L"Ïîëîæåíèå";
			this->bindingNavigatorPositionItem->AutoSize = false;
			this->bindingNavigatorPositionItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->bindingNavigatorPositionItem->Name = L"bindingNavigatorPositionItem";
			this->bindingNavigatorPositionItem->Size = System::Drawing::Size(50, 27);
			this->bindingNavigatorPositionItem->Text = L"0";
			this->bindingNavigatorPositionItem->ToolTipText = L"Òåêóùåå ïîëîæåíèå";
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
			this->bindingNavigatorMoveNextItem->Text = L"Ïåğåìåñòèòü âïåğåä";
			// 
			// bindingNavigatorMoveLastItem
			// 
			this->bindingNavigatorMoveLastItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMoveLastItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveLastItem.Image")));
			this->bindingNavigatorMoveLastItem->Name = L"bindingNavigatorMoveLastItem";
			this->bindingNavigatorMoveLastItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMoveLastItem->Size = System::Drawing::Size(29, 24);
			this->bindingNavigatorMoveLastItem->Text = L"Ïåğåìåñòèòü â êîíåö";
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
			this->toolStripButton1->Text = L"Ñîõğàíèòü";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm6::toolStripButton1_Click);
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = L"SELECT Nakladnaya.*\r\nFROM     Nakladnaya";
			this->oleDbSelectCommand1->Connection = this->oleDbConnection1;
			// 
			// oleDbConnection1
			// 
			this->oleDbConnection1->ConnectionString = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\\Users\\borga\\Desktop\\Ïğîåêò\\ASTO\\A"
				L"STO\\Database.mdb";
			// 
			// oleDbInsertCommand1
			// 
			this->oleDbInsertCommand1->CommandText = L"INSERT INTO `Nakladnaya` (`Òîâàğ`, `Äåòàëü`, `Êîë-âî`, `Öåíà`) VALUES (\?, \?, \?, \?"
				L")";
			this->oleDbInsertCommand1->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(4) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Òîâàğ",
					System::Data::OleDb::OleDbType::VarWChar, 0, L"Òîâàğ")), (gcnew System::Data::OleDb::OleDbParameter(L"Äåòàëü", System::Data::OleDb::OleDbType::VarWChar,
						0, L"Äåòàëü")), (gcnew System::Data::OleDb::OleDbParameter(L"Êîë-âî", System::Data::OleDb::OleDbType::VarWChar, 0, L"Êîë-âî")),
					(gcnew System::Data::OleDb::OleDbParameter(L"Öåíà", System::Data::OleDb::OleDbType::VarWChar, 0, L"Öåíà"))
			});
			// 
			// oleDbUpdateCommand1
			// 
			this->oleDbUpdateCommand1->CommandText = resources->GetString(L"oleDbUpdateCommand1.CommandText");
			this->oleDbUpdateCommand1->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(13) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Òîâàğ",
					System::Data::OleDb::OleDbType::VarWChar, 0, L"Òîâàğ")), (gcnew System::Data::OleDb::OleDbParameter(L"Äåòàëü", System::Data::OleDb::OleDbType::VarWChar,
						0, L"Äåòàëü")), (gcnew System::Data::OleDb::OleDbParameter(L"Êîë-âî", System::Data::OleDb::OleDbType::VarWChar, 0, L"Êîë-âî")),
					(gcnew System::Data::OleDb::OleDbParameter(L"Öåíà", System::Data::OleDb::OleDbType::VarWChar, 0, L"Öåíà")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Êîä",
						System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
						static_cast<System::Byte>(0), L"Êîä", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Òîâàğ",
							System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
							L"Òîâàğ", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Òîâàğ",
								System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
								static_cast<System::Byte>(0), L"Òîâàğ", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Äåòàëü",
									System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
									L"Äåòàëü", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Äåòàëü",
										System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
										static_cast<System::Byte>(0), L"Äåòàëü", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Êîë-âî",
											System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
											L"Êîë-âî", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Êîë-âî",
												System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
												static_cast<System::Byte>(0), L"Êîë-âî", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Öåíà",
													System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
													L"Öåíà", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Öåíà",
														System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
														static_cast<System::Byte>(0), L"Öåíà", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbDeleteCommand1
			// 
			this->oleDbDeleteCommand1->CommandText = resources->GetString(L"oleDbDeleteCommand1.CommandText");
			this->oleDbDeleteCommand1->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(9) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_Êîä",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"Êîä", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Òîâàğ",
						System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
						L"Òîâàğ", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Òîâàğ",
							System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
							static_cast<System::Byte>(0), L"Òîâàğ", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Äåòàëü",
								System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
								L"Äåòàëü", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Äåòàëü",
									System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
									static_cast<System::Byte>(0), L"Äåòàëü", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Êîë-âî",
										System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
										L"Êîë-âî", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Êîë-âî",
											System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
											static_cast<System::Byte>(0), L"Êîë-âî", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Öåíà",
												System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
												L"Öåíà", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Öåíà",
													System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
													static_cast<System::Byte>(0), L"Öåíà", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->DeleteCommand = this->oleDbDeleteCommand1;
			this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand1;
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(5) {
				(gcnew System::Data::Common::DataColumnMapping(L"Êîä",
					L"Êîä")), (gcnew System::Data::Common::DataColumnMapping(L"Òîâàğ", L"Òîâàğ")), (gcnew System::Data::Common::DataColumnMapping(L"Äåòàëü",
						L"Äåòàëü")), (gcnew System::Data::Common::DataColumnMapping(L"Êîë-âî", L"Êîë-âî")), (gcnew System::Data::Common::DataColumnMapping(L"Öåíà",
							L"Öåíà"))
			};
			this->oleDbDataAdapter1->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {
				(gcnew System::Data::Common::DataTableMapping(L"Table",
					L"Nakladnaya", __mcTemp__1))
			});
			this->oleDbDataAdapter1->UpdateCommand = this->oleDbUpdateCommand1;
			// 
			// comboBox1
			// 
			this->comboBox1->DataSource = this->nakladnayaBindingSource;
			this->comboBox1->DisplayMember = L"Êîä";
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(399, 28);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(174, 24);
			this->comboBox1->TabIndex = 4;
			// 
			// nakladnayaBindingSource1
			// 
			this->nakladnayaBindingSource1->DataMember = L"Nakladnaya";
			this->nakladnayaBindingSource1->DataSource = this->bindingSource1;
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"notifyIcon1.Icon")));
			this->notifyIcon1->Text = L"notifyIcon1";
			this->notifyIcon1->Visible = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(810, 28);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Ïå÷àòü";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm6::button1_Click);
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm6::printDocument1_PrintPage);
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
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(1013, 521);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->bindingNavigator1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm6";
			this->Text = L"Ïğèõîäíàÿ íàêëàäíàÿ";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm6::MyForm6_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm6::MyForm6_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyForm6::MyForm6_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nakladnayaBindingSource))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->EndInit();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingNavigator1))->EndInit();
			this->bindingNavigator1->ResumeLayout(false);
			this->bindingNavigator1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nakladnayaBindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm6_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		oleDbDataAdapter1->Fill(dataTable1);
	}
private: System::Void äåéñòâèÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	obj->Show();
}
private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	oleDbDataAdapter1->Update(dataTable1);
}
private: System::Void MyForm6_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {

}
private: System::Void MyForm6_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	oleDbDataAdapter1->Update(dataTable1);
}
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	int hey = 0;
	for (int i = 0; i < (dataGridView1->Rows->Count); i++) {
		hey = hey + dataGridView1->Rows[i]->Height;
	}
	Bitmap^ bmp = gcnew Bitmap(dataGridView1->Size.Width + 15, hey + 15);//íåìíîãî ïğèáàâëÿåì ğàçìåğ
	dataGridView1->DrawToBitmap(bmp, dataGridView1->Bounds);
	String^ drawString = "Êàêàÿ-òî ñòğîêà";
	System::Drawing::Font^ drawFont = gcnew System::Drawing::Font("Arial", 16);//øğèôò
	SolidBrush^ drawBrush = gcnew SolidBrush(Color::Black);//öâåò ÷åğíûé
	float x = 100.0F;
	float y = 100.0F;
	float width = 400.0F;//øèğèíà ñòğîêè
	float height = 50.0F;//âûñîòà
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
