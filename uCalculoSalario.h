//---------------------------------------------------------------------------

#ifndef uCalculoSalarioH
#define uCalculoSalarioH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TAtividade : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel3;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TButton *Button6;
	TButton *Button7;
	TButton *Button8;
	TButton *Button9;
	TButton *Button10;
	TEdit *Edit3;
	TEdit *Edit4;
	TEdit *Edit6;
	TMemo *Memo1;
	TEdit *Edit5;
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall Button9Click(TObject *Sender);
	void __fastcall Button10Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAtividade(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAtividade *Atividade;
//---------------------------------------------------------------------------
#endif
