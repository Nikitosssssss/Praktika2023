#pragma once
#include "TM.h"
#include "TR.h"
#include "PropEl.h"
#include "React.h"
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

	private: React^ react = gcnew React;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(23, 55);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Химические элементы";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(639, 439);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(144, 49);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Выход";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(23, 439);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(166, 65);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Периодическая система химических элементов";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(241, 439);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(191, 65);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Таблица растворимости кислот, солей и оснований";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(241, 55);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(144, 49);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Химические реакции";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(808, 529);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(826, 576);
			this->MinimumSize = System::Drawing::Size(826, 576);
			this->Name = L"MyForm";
			this->Text = L" Справочник по химии";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		PropEl^ form1 = gcnew PropEl;
		form1->Show();
	}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		TM^ form2 = gcnew TM;
		form2->Show(); 
	}
	private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Application::Exit();
	}
    private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e)
    {
		TR^ form3 = gcnew TR;
	    form3->Show();
	}
	private: System::Void ComboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
	}
private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (react->IsDisposed)
	{
		react = gcnew React();
		react->Show();
	}
	else
	{
		react->Show();
		react->Focus();
	}
}
};
}
