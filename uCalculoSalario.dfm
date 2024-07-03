object Atividade: TAtividade
  Left = 0
  Top = 0
  Caption = 'Atividade'
  ClientHeight = 431
  ClientWidth = 773
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  TextHeight = 13
  object Panel3: TPanel
    AlignWithMargins = True
    Left = 5
    Top = 5
    Width = 765
    Height = 118
    Margins.Left = 5
    Margins.Top = 5
    Margins.Bottom = 10
    Align = alClient
    AutoSize = True
    TabOrder = 0
    VerticalAlignment = taAlignTop
    ExplicitWidth = 759
    ExplicitHeight = 100
    object Label3: TLabel
      Left = 147
      Top = 13
      Width = 86
      Height = 13
      Alignment = taRightJustify
      AutoSize = False
      Caption = 'Sal'#225'rio:'
    end
    object Label4: TLabel
      Left = 150
      Top = 35
      Width = 83
      Height = 13
      Alignment = taRightJustify
      AutoSize = False
      Caption = 'Valor do Ticket:'
    end
    object Label5: TLabel
      Left = 143
      Top = 62
      Width = 90
      Height = 13
      Alignment = taRightJustify
      AutoSize = False
      Caption = 'Desconto Seguro:'
    end
    object Label6: TLabel
      Left = 130
      Top = 84
      Width = 103
      Height = 13
      Margins.Left = 10
      Alignment = taRightJustify
      AutoSize = False
      Caption = 'Quant. Horas extras:'
    end
    object Button6: TButton
      Left = 326
      Top = 4
      Width = 120
      Height = 25
      Caption = 'Sal'#225'rio + Ticket'
      TabOrder = 0
      OnClick = Button6Click
    end
    object Button7: TButton
      Left = 326
      Top = 31
      Width = 120
      Height = 25
      Caption = 'Valor do Seguro'
      TabOrder = 1
      OnClick = Button7Click
    end
    object Button8: TButton
      Left = 326
      Top = 58
      Width = 120
      Height = 25
      Caption = 'Valor de Horas Extras'
      TabOrder = 2
      OnClick = Button8Click
    end
    object Button9: TButton
      Left = 326
      Top = 85
      Width = 120
      Height = 24
      Caption = 'Valor do INSS'
      TabOrder = 3
      OnClick = Button9Click
    end
    object Button10: TButton
      Left = 452
      Top = 0
      Width = 120
      Height = 107
      Caption = 'C'#225'lculo sal'#225'rio L'#237'quido'
      TabOrder = 4
      OnClick = Button10Click
    end
    object Edit3: TEdit
      Left = 239
      Top = 8
      Width = 84
      Height = 21
      AutoSize = False
      TabOrder = 5
    end
    object Edit4: TEdit
      Left = 239
      Top = 32
      Width = 84
      Height = 21
      AutoSize = False
      TabOrder = 6
    end
    object Edit6: TEdit
      Left = 239
      Top = 81
      Width = 53
      Height = 21
      AutoSize = False
      TabOrder = 7
    end
    object Edit5: TEdit
      Left = 239
      Top = 57
      Width = 53
      Height = 21
      AutoSize = False
      TabOrder = 8
    end
  end
  object Memo1: TMemo
    AlignWithMargins = True
    Left = 3
    Top = 136
    Width = 767
    Height = 292
    Align = alBottom
    Lines.Strings = (
      '')
    TabOrder = 1
    ExplicitTop = 118
    ExplicitWidth = 761
  end
end
