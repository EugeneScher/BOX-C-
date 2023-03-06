//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <math.h>
#include <Math.hpp>
//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
        TGroupBox *GroupBox1;
        TGroupBox *GroupBox2;
        TEdit *Editax;
        TLabel *Label1;
        TEdit *Editay;
        TLabel *Label2;
        TGroupBox *GroupBox3;
        TLabel *Label3;
        TLabel *Label4;
        TEdit *Editbx;
        TEdit *Editby;
        TGroupBox *GroupBox4;
        TLabel *Label5;
        TLabel *Label6;
        TEdit *Editdx;
        TEdit *Editdy;
        TGroupBox *GroupBox5;
        TLabel *Label7;
        TLabel *Label8;
        TEdit *Editcx;
        TEdit *Editcy;
        TGroupBox *GroupBox6;
        TButton *Button1;
        TLabel *ResultLabel;
        void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TMainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
struct sPoint
{
  double x;
  double y;
};

double le(sPoint a1,sPoint a2);
sPoint coord_vector(sPoint begin, sPoint end);
bool ortogonal_vectors(sPoint v1,sPoint v2);
//---------------------------------------------------------------------------
#endif
