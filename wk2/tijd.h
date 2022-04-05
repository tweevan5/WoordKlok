

void BuildScreenTime()
{  
  SetAll(0, 0, 0, 0, 0);
  if (hetis)                                     // het is visible
  {
    ShowWord(LW_HET, 10, 0, 0, 0);               // het
    ShowWord(LW_IS, 0, 10, 0, 0);                // is
  }

  switch (minuten % 10)                          // get minutes 1-2-3-4
  {
    case 4:
    case 9:
    {
      ShowWord(LT_MINUTE_4, 10, 0, 0, 0);        // 4th minute
    }
    case 3:
    case 8:
    {
      ShowWord(LT_MINUTE_3, 10, 0, 0, 0);        // 3rd minute
    }
    case 2:
    case 7:
    {
      ShowWord(LT_MINUTE_2, 10, 0, 0, 0);        // 2nd minute
    }
    case 1:
    case 6:
    {
      ShowWord(LT_MINUTE_1, 10, 0, 0, 0);        // 1st minute
    }
    break;
    default:
    break;
  }  

  switch (minuten)                               // get 0-5-10-15-20-25-30-35-40-45-50-55 minutes
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    {
      ShowWord(LW_UUR, 10, 0, 0, 0);             // uur
    }
    break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    {
      ShowWord(LW_VIJF, 10, 0, 0, 0);             // vijf over
      ShowWord(LW_OVER, 10, 0, 0, 0);
    }
    break;
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    {
      ShowWord(LW_TIEN, 10, 0, 0, 0);             // tien over
      ShowWord(LW_OVER, 10, 0, 0, 0);
    }
    break;
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    {
      ShowWord(LW_KWART, 10, 0, 0, 0);            // kwart over
      ShowWord(LW_OVER, 10, 0, 0, 0);
    }
    break;
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    {
      ShowWord(LW_TIEN, 10, 0, 0, 0);             // tien voor half
      ShowWord(LW_VOOR, 10, 0, 0, 0);
      ShowWord(LW_HALF, 10, 0, 0, 0);
    }
    break;
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    {
      ShowWord(LW_VIJF, 10, 0, 0, 0);             // vijf voor half
      ShowWord(LW_VOOR, 10, 0, 0, 0);
      ShowWord(LW_HALF, 10, 0, 0, 0);
    }
    break;
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    {
      ShowWord(LW_HALF, 10, 0, 0, 0);             // half
    }
    break;
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    {
      ShowWord(LW_VIJF, 10, 0, 0, 0);             // vijf over half
      ShowWord(LW_OVER, 10, 0, 0, 0);
      ShowWord(LW_HALF, 10, 0, 0, 0);
    }
    break;
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    {
      ShowWord(LW_TIEN, 10, 0, 0, 0);             // tien over half
      ShowWord(LW_OVER, 10, 0, 0, 0);
      ShowWord(LW_HALF, 10, 0, 0, 0);
    }
    break;
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    {
      ShowWord(LW_KWART, 10, 0, 0, 0);            // kwart voor
      ShowWord(LW_VOOR, 10, 0, 0, 0);
    }
    break;
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    {
      ShowWord(LW_TIEN, 10, 0, 0, 0);             // tien voor
      ShowWord(LW_VOOR, 10, 0, 0, 0);
    }
    break;
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    {
      ShowWord(LW_VIJF, 10, 0, 0, 0);             // vijf voor
      ShowWord(LW_VOOR, 10, 0, 0, 0);
    }
    break;
    default:
    break;
  }

  if (minuten >= 20) klok_uren = uren + 1;       // more than 20 minutes passed the hour leads to the next hour in words
  else klok_uren = uren;
  if (klok_uren > 12) klok_uren = klok_uren - 12; // wrap hours for 24
  switch(klok_uren)                              // 1-2-3-4-5-6-7-8-9-10-11-12 hours
  {
    case 0:  ShowWord(LC_TWAALF, 10, 0, 0, 0); break;
    case 1:  ShowWord(LC_EEN,    10, 0, 0, 0); break;
    case 2:  ShowWord(LC_TWEE,   10, 0, 0, 0); break;
    case 3:  ShowWord(LC_DRIE,   10, 0, 0, 0); break;
    case 4:  ShowWord(LC_VIER,   10, 0, 0, 0); break;
    case 5:  ShowWord(LC_VIJF,   10, 0, 0, 0); break;
    case 6:  ShowWord(LC_ZES,    10, 0, 0, 0); break;
    case 7:  ShowWord(LC_ZEVEN,  10, 0, 0, 0); break;
    case 8:  ShowWord(LC_ACHT,   10, 0, 0, 0); break;
    case 9:  ShowWord(LC_NEGEN,  10, 0, 0, 0); break;
    case 10: ShowWord(LC_TIEN,   10, 0, 0, 0); break;
    case 11: ShowWord(LC_ELF,    10, 0, 0, 0); break;
    case 12: ShowWord(LC_TWAALF, 10, 0, 0, 0); break;
    default:
    break;
  }
}

