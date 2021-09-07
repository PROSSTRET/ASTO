#pragma once
#include "MyForm3.h"


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
	/// Ñâîäêà äëÿ MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;
		MyForm3(void)
		{
			InitializeComponent();
			
		
		}

		MyForm3(Form ^objl)
		{
			obj = objl;
			InitializeComponent();


		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îáÏğîãğàììåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çàãğóçèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ äîáàâèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îáíîâèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ óäàëèòüToolStripMenuItem;






	private:

	public: System::Windows::Forms::ToolStripMenuItem^ íàçàäToolStripMenuItem;
	private: System::Data::DataSet^ dataSet1;
	public:
	private: System::Data::DataTable^ dataTable1;
	private: System::Data::DataColumn^ dataColumn1;
	private: System::Data::DataColumn^ dataColumn2;
	private: System::Data::DataColumn^ dataColumn3;
	private: System::Data::DataColumn^ dataColumn4;
	private: System::Data::DataTable^ dataTable2;
	private: System::Data::DataColumn^ dataColumn5;
	private: System::Data::DataColumn^ dataColumn6;
	private: System::Data::DataColumn^ dataColumn7;
	private: System::Data::DataColumn^ dataColumn8;
	private: System::Data::DataColumn^ dataColumn9;
	private: System::Data::DataTable^ dataTable3;
	private: System::Data::DataColumn^ dataColumn10;
	private: System::Data::DataColumn^ dataColumn11;
	private: System::Data::DataColumn^ dataColumn12;
	private: System::Data::DataColumn^ dataColumn13;
	private: System::Data::DataColumn^ dataColumn14;
	private: System::Data::DataColumn^ dataColumn15;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
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
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ idDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nameDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ costDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ quantityDataGridViewTextBoxColumn;
	private: System::Data::OleDb::OleDbCommand^ oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbConnection^ oleDbConnection1;
	private: System::Data::OleDb::OleDbDataAdapter^ oleDbDataAdapter1;
	private: System::Windows::Forms::BindingSource^ bindingSource2;
	private: System::Windows::Forms::BindingSource^ bindingSource3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ iDDataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ôÈÎDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ äîëæíîñòüDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ äàòàĞîæäåíèÿDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ äàòàÏğèêàçàDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ êîäÓñëóãèDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ âğåìÿÏğîâåäåíèÿDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ãğàôèêDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ñğîêÄåéñòâèÿDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ êîäÎòâåòñòâåííîãîDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ñòîèìîñòüDataGridViewTextBoxColumn;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::NotifyIcon^ notifyIcon1;
private: System::Data::OleDb::OleDbCommand^ oleDbCommand1;
private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::ComponentModel::IContainer^ components;

	public:




	public:



	private:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàãğóçèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîáàâèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îáíîâèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->óäàëèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îáÏğîãğàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàçàäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->dataTable1 = (gcnew System::Data::DataTable());
			this->dataColumn1 = (gcnew System::Data::DataColumn());
			this->dataColumn2 = (gcnew System::Data::DataColumn());
			this->dataColumn3 = (gcnew System::Data::DataColumn());
			this->dataColumn4 = (gcnew System::Data::DataColumn());
			this->dataTable2 = (gcnew System::Data::DataTable());
			this->dataColumn5 = (gcnew System::Data::DataColumn());
			this->dataColumn6 = (gcnew System::Data::DataColumn());
			this->dataColumn7 = (gcnew System::Data::DataColumn());
			this->dataColumn8 = (gcnew System::Data::DataColumn());
			this->dataColumn9 = (gcnew System::Data::DataColumn());
			this->dataTable3 = (gcnew System::Data::DataTable());
			this->dataColumn10 = (gcnew System::Data::DataColumn());
			this->dataColumn11 = (gcnew System::Data::DataColumn());
			this->dataColumn12 = (gcnew System::Data::DataColumn());
			this->dataColumn13 = (gcnew System::Data::DataColumn());
			this->dataColumn14 = (gcnew System::Data::DataColumn());
			this->dataColumn15 = (gcnew System::Data::DataColumn());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->idDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nameDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->costDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->quantityDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource3 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->iDDataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ôÈÎDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->äîëæíîñòüDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->äàòàĞîæäåíèÿDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->äàòàÏğèêàçàDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->êîäÓñëóãèDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->âğåìÿÏğîâåäåíèÿDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ãğàôèêDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ñğîêÄåéñòâèÿDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->êîäÎòâåòñòâåííîãîDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ñòîèìîñòüDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingNavigator1))->BeginInit();
			this->bindingNavigator1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ôàéëToolStripMenuItem,
					this->îáÏğîãğàììåToolStripMenuItem, this->âûõîäToolStripMenuItem, this->íàçàäToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1622, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->çàãğóçèòüToolStripMenuItem,
					this->äîáàâèòüToolStripMenuItem, this->îáíîâèòüToolStripMenuItem, this->óäàëèòüToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(88, 24);
			this->ôàéëToolStripMenuItem->Text = L"Äåéñòâèÿ";
			this->ôàéëToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm3::ôàéëToolStripMenuItem_Click);
			// 
			// çàãğóçèòüToolStripMenuItem
			// 
			this->çàãğóçèòüToolStripMenuItem->Name = L"çàãğóçèòüToolStripMenuItem";
			this->çàãğóçèòüToolStripMenuItem->Size = System::Drawing::Size(161, 26);
			this->çàãğóçèòüToolStripMenuItem->Text = L"Çàãğóçèòü";
			// 
			// äîáàâèòüToolStripMenuItem
			// 
			this->äîáàâèòüToolStripMenuItem->Name = L"äîáàâèòüToolStripMenuItem";
			this->äîáàâèòüToolStripMenuItem->Size = System::Drawing::Size(161, 26);
			this->äîáàâèòüToolStripMenuItem->Text = L"Äîáàâèòü";
			// 
			// îáíîâèòüToolStripMenuItem
			// 
			this->îáíîâèòüToolStripMenuItem->Name = L"îáíîâèòüToolStripMenuItem";
			this->îáíîâèòüToolStripMenuItem->Size = System::Drawing::Size(161, 26);
			this->îáíîâèòüToolStripMenuItem->Text = L"Îáíîâèòü";
			// 
			// óäàëèòüToolStripMenuItem
			// 
			this->óäàëèòüToolStripMenuItem->Name = L"óäàëèòüToolStripMenuItem";
			this->óäàëèòüToolStripMenuItem->Size = System::Drawing::Size(161, 26);
			this->óäàëèòüToolStripMenuItem->Text = L"Óäàëèòü";
			// 
			// îáÏğîãğàììåToolStripMenuItem
			// 
			this->îáÏğîãğàììåToolStripMenuItem->Name = L"îáÏğîãğàììåToolStripMenuItem";
			this->îáÏğîãğàììåToolStripMenuItem->Size = System::Drawing::Size(127, 24);
			this->îáÏğîãğàììåToolStripMenuItem->Text = L"Îá ïğîãğàììå";
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm3::âûõîäToolStripMenuItem_Click);
			// 
			// íàçàäToolStripMenuItem
			// 
			this->íàçàäToolStripMenuItem->Name = L"íàçàäToolStripMenuItem";
			this->íàçàäToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->íàçàäToolStripMenuItem->Text = L"Íàçàä";
			this->íàçàäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm3::íàçàäToolStripMenuItem_Click);
			// 
			// dataSet1
			// 
			this->dataSet1->DataSetName = L"NewDataSet";
			this->dataSet1->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(3) { this->dataTable1, this->dataTable2, this->dataTable3 });
			// 
			// dataTable1
			// 
			this->dataTable1->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(4) {
				this->dataColumn1, this->dataColumn2,
					this->dataColumn3, this->dataColumn4
			});
			this->dataTable1->TableName = L"table_name";
			// 
			// dataColumn1
			// 
			this->dataColumn1->ColumnName = L"id";
			// 
			// dataColumn2
			// 
			this->dataColumn2->ColumnName = L"Name";
			// 
			// dataColumn3
			// 
			this->dataColumn3->ColumnName = L"Cost";
			// 
			// dataColumn4
			// 
			this->dataColumn4->ColumnName = L"Quantity";
			// 
			// dataTable2
			// 
			this->dataTable2->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(5) {
				this->dataColumn5, this->dataColumn6,
					this->dataColumn7, this->dataColumn8, this->dataColumn9
			});
			this->dataTable2->TableName = L"sotrudniki";
			// 
			// dataColumn5
			// 
			this->dataColumn5->ColumnName = L"ID";
			// 
			// dataColumn6
			// 
			this->dataColumn6->ColumnName = L"ÔÈÎ";
			// 
			// dataColumn7
			// 
			this->dataColumn7->ColumnName = L"Äîëæíîñòü";
			// 
			// dataColumn8
			// 
			this->dataColumn8->ColumnName = L"Äàòà ğîæäåíèÿ";
			// 
			// dataColumn9
			// 
			this->dataColumn9->ColumnName = L"Äàòà ïğèêàçà";
			// 
			// dataTable3
			// 
			this->dataTable3->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(6) {
				this->dataColumn10, this->dataColumn11,
					this->dataColumn12, this->dataColumn13, this->dataColumn14, this->dataColumn15
			});
			this->dataTable3->TableName = L"Sale";
			// 
			// dataColumn10
			// 
			this->dataColumn10->ColumnName = L"Êîä óñëóãè";
			// 
			// dataColumn11
			// 
			this->dataColumn11->ColumnName = L"Âğåìÿ ïğîâåäåíèÿ";
			// 
			// dataColumn12
			// 
			this->dataColumn12->ColumnName = L"Ãğàôèê";
			// 
			// dataColumn13
			// 
			this->dataColumn13->ColumnName = L"Ñğîê äåéñòâèÿ";
			// 
			// dataColumn14
			// 
			this->dataColumn14->ColumnName = L"Êîä îòâåòñòâåííîãî";
			// 
			// dataColumn15
			// 
			this->dataColumn15->ColumnName = L"Ñòîèìîñòü";
			// 
			// bindingSource1
			// 
			this->bindingSource1->DataMember = L"table_name";
			this->bindingSource1->DataSource = this->dataSet1;
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
			this->bindingNavigator1->Location = System::Drawing::Point(0, 28);
			this->bindingNavigator1->MoveFirstItem = this->bindingNavigatorMoveFirstItem;
			this->bindingNavigator1->MoveLastItem = this->bindingNavigatorMoveLastItem;
			this->bindingNavigator1->MoveNextItem = this->bindingNavigatorMoveNextItem;
			this->bindingNavigator1->MovePreviousItem = this->bindingNavigatorMovePreviousItem;
			this->bindingNavigator1->Name = L"bindingNavigator1";
			this->bindingNavigator1->PositionItem = this->bindingNavigatorPositionItem;
			this->bindingNavigator1->Size = System::Drawing::Size(1622, 27);
			this->bindingNavigator1->TabIndex = 1;
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
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm3::toolStripButton1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DataSource = this->bindingSource1;
			this->comboBox1->DisplayMember = L"id";
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(12, 66);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(347, 24);
			this->comboBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(365, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Ïîèñê";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoGenerateColumns = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->idDataGridViewTextBoxColumn,
					this->nameDataGridViewTextBoxColumn, this->costDataGridViewTextBoxColumn, this->quantityDataGridViewTextBoxColumn
			});
			this->dataGridView1->DataSource = this->bindingSource1;
			this->dataGridView1->Location = System::Drawing::Point(12, 115);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(503, 702);
			this->dataGridView1->TabIndex = 4;
			// 
			// idDataGridViewTextBoxColumn
			// 
			this->idDataGridViewTextBoxColumn->DataPropertyName = L"id";
			this->idDataGridViewTextBoxColumn->HeaderText = L"id";
			this->idDataGridViewTextBoxColumn->MinimumWidth = 6;
			this->idDataGridViewTextBoxColumn->Name = L"idDataGridViewTextBoxColumn";
			this->idDataGridViewTextBoxColumn->Width = 125;
			// 
			// nameDataGridViewTextBoxColumn
			// 
			this->nameDataGridViewTextBoxColumn->DataPropertyName = L"Name";
			this->nameDataGridViewTextBoxColumn->HeaderText = L"Name";
			this->nameDataGridViewTextBoxColumn->MinimumWidth = 6;
			this->nameDataGridViewTextBoxColumn->Name = L"nameDataGridViewTextBoxColumn";
			this->nameDataGridViewTextBoxColumn->Width = 125;
			// 
			// costDataGridViewTextBoxColumn
			// 
			this->costDataGridViewTextBoxColumn->DataPropertyName = L"Cost";
			this->costDataGridViewTextBoxColumn->HeaderText = L"Cost";
			this->costDataGridViewTextBoxColumn->MinimumWidth = 6;
			this->costDataGridViewTextBoxColumn->Name = L"costDataGridViewTextBoxColumn";
			this->costDataGridViewTextBoxColumn->Width = 125;
			// 
			// quantityDataGridViewTextBoxColumn
			// 
			this->quantityDataGridViewTextBoxColumn->DataPropertyName = L"Quantity";
			this->quantityDataGridViewTextBoxColumn->HeaderText = L"Quantity";
			this->quantityDataGridViewTextBoxColumn->MinimumWidth = 6;
			this->quantityDataGridViewTextBoxColumn->Name = L"quantityDataGridViewTextBoxColumn";
			this->quantityDataGridViewTextBoxColumn->Width = 125;
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = resources->GetString(L"oleDbSelectCommand1.CommandText");
			this->oleDbSelectCommand1->Connection = this->oleDbConnection1;
			// 
			// oleDbConnection1
			// 
			this->oleDbConnection1->ConnectionString = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\\Users\\borga\\Desktop\\Ïğîåêò\\ASTO\\A"
				L"STO\\Database.mdb";
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(15) {
				(gcnew System::Data::Common::DataColumnMapping(L"id",
					L"id")), (gcnew System::Data::Common::DataColumnMapping(L"Name", L"Name")), (gcnew System::Data::Common::DataColumnMapping(L"Cost",
						L"Cost")), (gcnew System::Data::Common::DataColumnMapping(L"Quantity", L"Quantity")), (gcnew System::Data::Common::DataColumnMapping(L"Expr1",
							L"Expr1")), (gcnew System::Data::Common::DataColumnMapping(L"ÔÈÎ", L"ÔÈÎ")), (gcnew System::Data::Common::DataColumnMapping(L"Äîëæíîñòü",
								L"Äîëæíîñòü")), (gcnew System::Data::Common::DataColumnMapping(L"Äàòà ğîæäåíèÿ", L"Äàòà ğîæäåíèÿ")), (gcnew System::Data::Common::DataColumnMapping(L"Äàòà ïğèêàçà",
									L"Äàòà ïğèêàçà")), (gcnew System::Data::Common::DataColumnMapping(L"Êîä óñëóãè", L"Êîä óñëóãè")), (gcnew System::Data::Common::DataColumnMapping(L"Âğåìÿ ïğîâåäåíèÿ",
										L"Âğåìÿ ïğîâåäåíèÿ")), (gcnew System::Data::Common::DataColumnMapping(L"Ãğàôèê", L"Ãğàôèê")), (gcnew System::Data::Common::DataColumnMapping(L"Ñğîê äåéñòâèÿ",
											L"Ñğîê äåéñòâèÿ")), (gcnew System::Data::Common::DataColumnMapping(L"Êîä îòâåòñòâåííîãî", L"Êîä îòâåòñòâåííîãî")), (gcnew System::Data::Common::DataColumnMapping(L"Ñòîèìîñòü",
												L"Ñòîèìîñòü"))
			};
			this->oleDbDataAdapter1->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {
				(gcnew System::Data::Common::DataTableMapping(L"Table",
					L"Sale", __mcTemp__1))
			});
			this->oleDbDataAdapter1->UpdateCommand = this->oleDbCommand1;
			this->oleDbDataAdapter1->RowUpdated += gcnew System::Data::OleDb::OleDbRowUpdatedEventHandler(this, &MyForm3::oleDbDataAdapter1_RowUpdated);
			// 
			// bindingSource2
			// 
			this->bindingSource2->DataMember = L"sotrudniki";
			this->bindingSource2->DataSource = this->dataSet1;
			// 
			// bindingSource3
			// 
			this->bindingSource3->DataMember = L"Sale";
			this->bindingSource3->DataSource = this->dataSet1;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AutoGenerateColumns = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->iDDataGridViewTextBoxColumn1,
					this->ôÈÎDataGridViewTextBoxColumn, this->äîëæíîñòüDataGridViewTextBoxColumn, this->äàòàĞîæäåíèÿDataGridViewTextBoxColumn, this->äàòàÏğèêàçàDataGridViewTextBoxColumn
			});
			this->dataGridView2->DataSource = this->bindingSource2;
			this->dataGridView2->Location = System::Drawing::Point(558, 115);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(482, 702);
			this->dataGridView2->TabIndex = 5;
			// 
			// iDDataGridViewTextBoxColumn1
			// 
			this->iDDataGridViewTextBoxColumn1->DataPropertyName = L"ID";
			this->iDDataGridViewTextBoxColumn1->HeaderText = L"ID";
			this->iDDataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->iDDataGridViewTextBoxColumn1->Name = L"iDDataGridViewTextBoxColumn1";
			this->iDDataGridViewTextBoxColumn1->Width = 125;
			// 
			// ôÈÎDataGridViewTextBoxColumn
			// 
			this->ôÈÎDataGridViewTextBoxColumn->DataPropertyName = L"ÔÈÎ";
			this->ôÈÎDataGridViewTextBoxColumn->HeaderText = L"ÔÈÎ";
			this->ôÈÎDataGridViewTextBoxColumn->MinimumWidth = 6;
			this->ôÈÎDataGridViewTextBoxColumn->Name = L"ôÈÎDataGridViewTextBoxColumn";
			this->ôÈÎDataGridViewTextBoxColumn->Width = 125;
			// 
			// äîëæíîñòüDataGridViewTextBoxColumn
			// 
			this->äîëæíîñòüDataGridViewTextBoxColumn->DataPropertyName = L"Äîëæíîñòü";
			this->äîëæíîñòüDataGridViewTextBoxColumn->HeaderText = L"Äîëæíîñòü";
			this->äîëæíîñòüDataGridViewTextBoxColumn->MinimumWidth = 6;
			this->äîëæíîñòüDataGridViewTextBoxColumn->Name = L"äîëæíîñòüDataGridViewTextBoxColumn";
			this->äîëæíîñòüDataGridViewTextBoxColumn->Width = 125;
			// 
			// äàòàĞîæäåíèÿDataGridViewTextBoxColumn
			// 
			this->äàòàĞîæäåíèÿDataGridViewTextBoxColumn->DataPropertyName = L"Äàòà ğîæäåíèÿ";
			this->äàòàĞîæäåíèÿDataGridViewTextBoxColumn->HeaderText = L"Äàòà ğîæäåíèÿ";
			this->äàòàĞîæäåíèÿDataGridViewTextBoxColumn->MinimumWidth = 6;
			this->äàòàĞîæäåíèÿDataGridViewTextBoxColumn->Name = L"äàòàĞîæäåíèÿDataGridViewTextBoxColumn";
			this->äàòàĞîæäåíèÿDataGridViewTextBoxColumn->Width = 125;
			// 
			// äàòàÏğèêàçàDataGridViewTextBoxColumn
			// 
			this->äàòàÏğèêàçàDataGridViewTextBoxColumn->DataPropertyName = L"Äàòà ïğèêàçà";
			this->äàòàÏğèêàçàDataGridViewTextBoxColumn->HeaderText = L"Äàòà ïğèêàçà";
			this->äàòàÏğèêàçàDataGridViewTextBoxColumn->MinimumWidth = 6;
			this->äàòàÏğèêàçàDataGridViewTextBoxColumn->Name = L"äàòàÏğèêàçàDataGridViewTextBoxColumn";
			this->äàòàÏğèêàçàDataGridViewTextBoxColumn->Width = 125;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AutoGenerateColumns = false;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->êîäÓñëóãèDataGridViewTextBoxColumn,
					this->âğåìÿÏğîâåäåíèÿDataGridViewTextBoxColumn, this->ãğàôèêDataGridViewTextBoxColumn, this->ñğîêÄåéñòâèÿDataGridViewTextBoxColumn,
					this->êîäÎòâåòñòâåííîãîDataGridViewTextBoxColumn, this->ñòîèìîñòüDataGridViewTextBoxColumn
			});
			this->dataGridView3->DataSource = this->bindingSource3;
			this->dataGridView3->Location = System::Drawing::Point(1096, 115);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(453, 702);
			this->dataGridView3->TabIndex = 6;
			// 
			// êîäÓñëóãèDataGridViewTextBoxColumn
			// 
			this->êîäÓñëóãèDataGridViewTextBoxColumn->DataPropertyName = L"Êîä óñëóãè";
			this->êîäÓñëóãèDataGridViewTextBoxColumn->HeaderText = L"Êîä óñëóãè";
			this->êîäÓñëóãèDataGridViewTextBoxColumn->MinimumWidth = 6;
			this->êîäÓñëóãèDataGridViewTextBoxColumn->Name = L"êîäÓñëóãèDataGridViewTextBoxColumn";
			this->êîäÓñëóãèDataGridViewTextBoxColumn->Width = 125;
			// 
			// âğåìÿÏğîâåäåíèÿDataGridViewTextBoxColumn
			// 
			this->âğåìÿÏğîâåäåíèÿDataGridViewTextBoxColumn->DataPropertyName = L"Âğåìÿ ïğîâåäåíèÿ";
			this->âğåìÿÏğîâåäåíèÿDataGridViewTextBoxColumn->HeaderText = L"Âğåìÿ ïğîâåäåíèÿ";
			this->âğåìÿÏğîâåäåíèÿDataGridViewTextBoxColumn->MinimumWidth = 6;
			this->âğåìÿÏğîâåäåíèÿDataGridViewTextBoxColumn->Name = L"âğåìÿÏğîâåäåíèÿDataGridViewTextBoxColumn";
			this->âğåìÿÏğîâåäåíèÿDataGridViewTextBoxColumn->Width = 125;
			// 
			// ãğàôèêDataGridViewTextBoxColumn
			// 
			this->ãğàôèêDataGridViewTextBoxColumn->DataPropertyName = L"Ãğàôèê";
			this->ãğàôèêDataGridViewTextBoxColumn->HeaderText = L"Ãğàôèê";
			this->ãğàôèêDataGridViewTextBoxColumn->MinimumWidth = 6;
			this->ãğàôèêDataGridViewTextBoxColumn->Name = L"ãğàôèêDataGridViewTextBoxColumn";
			this->ãğàôèêDataGridViewTextBoxColumn->Width = 125;
			// 
			// ñğîêÄåéñòâèÿDataGridViewTextBoxColumn
			// 
			this->ñğîêÄåéñòâèÿDataGridViewTextBoxColumn->DataPropertyName = L"Ñğîê äåéñòâèÿ";
			this->ñğîêÄåéñòâèÿDataGridViewTextBoxColumn->HeaderText = L"Ñğîê äåéñòâèÿ";
			this->ñğîêÄåéñòâèÿDataGridViewTextBoxColumn->MinimumWidth = 6;
			this->ñğîêÄåéñòâèÿDataGridViewTextBoxColumn->Name = L"ñğîêÄåéñòâèÿDataGridViewTextBoxColumn";
			this->ñğîêÄåéñòâèÿDataGridViewTextBoxColumn->Width = 125;
			// 
			// êîäÎòâåòñòâåííîãîDataGridViewTextBoxColumn
			// 
			this->êîäÎòâåòñòâåííîãîDataGridViewTextBoxColumn->DataPropertyName = L"Êîä îòâåòñòâåííîãî";
			this->êîäÎòâåòñòâåííîãîDataGridViewTextBoxColumn->HeaderText = L"Êîä îòâåòñòâåííîãî";
			this->êîäÎòâåòñòâåííîãîDataGridViewTextBoxColumn->MinimumWidth = 6;
			this->êîäÎòâåòñòâåííîãîDataGridViewTextBoxColumn->Name = L"êîäÎòâåòñòâåííîãîDataGridViewTextBoxColumn";
			this->êîäÎòâåòñòâåííîãîDataGridViewTextBoxColumn->Width = 125;
			// 
			// ñòîèìîñòüDataGridViewTextBoxColumn
			// 
			this->ñòîèìîñòüDataGridViewTextBoxColumn->DataPropertyName = L"Ñòîèìîñòü";
			this->ñòîèìîñòüDataGridViewTextBoxColumn->HeaderText = L"Ñòîèìîñòü";
			this->ñòîèìîñòüDataGridViewTextBoxColumn->MinimumWidth = 6;
			this->ñòîèìîñòüDataGridViewTextBoxColumn->Name = L"ñòîèìîñòüDataGridViewTextBoxColumn";
			this->ñòîèìîñòüDataGridViewTextBoxColumn->Width = 125;
			// 
			// comboBox2
			// 
			this->comboBox2->DataSource = this->bindingSource2;
			this->comboBox2->DisplayMember = L"ID";
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(571, 62);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(311, 24);
			this->comboBox2->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(898, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Ïîèñê";
			// 
			// comboBox3
			// 
			this->comboBox3->DataSource = this->bindingSource3;
			this->comboBox3->DisplayMember = L"Êîä óñëóãè";
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(1107, 62);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(311, 24);
			this->comboBox3->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1424, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 17);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Ïîèñê";
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"notifyIcon1.Icon")));
			this->notifyIcon1->Text = L"notifyIcon1";
			this->notifyIcon1->Visible = true;
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1622, 853);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->bindingNavigator1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm3";
			this->Text = L"Áàçà äàííûõ";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm3::MyForm3_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingNavigator1))->EndInit();
			this->bindingNavigator1->ResumeLayout(false);
			this->bindingNavigator1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ôàéëToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void íàçàäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	
		this->Hide();
		obj->Show();
	
	}
private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) {
	oleDbDataAdapter1->Fill(dataTable1);
	oleDbDataAdapter1->Fill(dataTable2);
	oleDbDataAdapter1->Fill(dataTable3);
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	oleDbDataAdapter1->Update(dataTable1);
	oleDbDataAdapter1->Update(dataTable2);
	oleDbDataAdapter1->Update(dataTable3);
}
private: System::Void MyForm3_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	oleDbDataAdapter1->Update(dataTable1);
	oleDbDataAdapter1->Update(dataTable2);
	oleDbDataAdapter1->Update(dataTable3);
}
private: System::Void oleDbDataAdapter1_RowUpdated(System::Object^ sender, System::Data::OleDb::OleDbRowUpdatedEventArgs^ e) {
	
}
private: System::Void oleDbDataAdapter1_oleDbCommand1(System::Object^ sender, System::Data::OleDb::OleDbRowUpdatedEventArgs^ e) {
		   String^ connectionString = "provider = Microsoft.Jet.OLEDB.4.0; data Source = Database.mdb";
		   OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
	   }
};
}
