

void BuildScreenTime()
{  
  SetAll(0, 0, 0, 0, 0);                         // clear all
  if (hetis)                                     // het is visible
  {
    ShowWord(LW_HET, cr, cg, cb, cw);            // het
    ShowWord(LW_IS, cr, cg, cb, cw);             // is
  }

  switch (minuten % 10)                          // get minutes 1-2-3-4
  {
    case 4:
    case 9:
    {
      ShowWord(LT_MINUTE_4, cr, cg, cb, cw);     // 4th minute
    }
    case 3:
    case 8:
    {
      ShowWord(LT_MINUTE_3, cr, cg, cb, cw);     // 3rd minute
    }
    case 2:
    case 7:
    {
      ShowWord(LT_MINUTE_2, cr, cg, cb, cw);     // 2nd minute
    }
    case 1:
    case 6:
    {
      ShowWord(LT_MINUTE_1, cr, cg, cb, cw);     // 1st minute
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
      ShowWord(LW_UUR, cr, cg, cb, cw);          // uur
    }
    break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    {
      ShowWord(LW_VIJF, cr, cg, cb, cw);         // vijf over
      ShowWord(LW_OVER, cr, cg, cb, cw);
    }
    break;
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    {
      ShowWord(LW_TIEN, cr, cg, cb, cw);         // tien over
      ShowWord(LW_OVER, cr, cg, cb, cw);
    }
    break;
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    {
      ShowWord(LW_KWART, cr, cg, cb, cw);        // kwart over
      ShowWord(LW_OVER, cr, cg, cb, cw);
    }
    break;
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    {
      ShowWord(LW_TIEN, cr, cg, cb, cw);         // tien voor half
      ShowWord(LW_VOOR, cr, cg, cb, cw);
      ShowWord(LW_HALF, cr, cg, cb, cw);
    }
    break;
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    {
      ShowWord(LW_VIJF, cr, cg, cb, cw);         // vijf voor half
      ShowWord(LW_VOOR, cr, cg, cb, cw);
      ShowWord(LW_HALF, cr, cg, cb, cw);
    }
    break;
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    {
      ShowWord(LW_HALF, cr, cg, cb, cw);         // half
    }
    break;
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    {
      ShowWord(LW_VIJF, cr, cg, cb, cw);         // vijf over half
      ShowWord(LW_OVER, cr, cg, cb, cw);
      ShowWord(LW_HALF, cr, cg, cb, cw);
    }
    break;
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    {
      ShowWord(LW_TIEN, cr, cg, cb, cw);         // tien over half
      ShowWord(LW_OVER, cr, cg, cb, cw);
      ShowWord(LW_HALF, cr, cg, cb, cw);
    }
    break;
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    {
      ShowWord(LW_KWART, cr, cg, cb, cw);        // kwart voor
      ShowWord(LW_VOOR, cr, cg, cb, cw);
    }
    break;
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    {
      ShowWord(LW_TIEN, cr, cg, cb, cw);         // tien voor
      ShowWord(LW_VOOR, cr, cg, cb, cw);
    }
    break;
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    {
      ShowWord(LW_VIJF, cr, cg, cb, cw);         // vijf voor
      ShowWord(LW_VOOR, cr, cg, cb, cw);
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
    case 0:  ShowWord(LC_TWAALF, cr, cg, cb, cw); break;
    case 1:  ShowWord(LC_EEN,    cr, cg, cb, cw); break;
    case 2:  ShowWord(LC_TWEE,   cr, cg, cb, cw); break;
    case 3:  ShowWord(LC_DRIE,   cr, cg, cb, cw); break;
    case 4:  ShowWord(LC_VIER,   cr, cg, cb, cw); break;
    case 5:  ShowWord(LC_VIJF,   cr, cg, cb, cw); break;
    case 6:  ShowWord(LC_ZES,    cr, cg, cb, cw); break;
    case 7:  ShowWord(LC_ZEVEN,  cr, cg, cb, cw); break;
    case 8:  ShowWord(LC_ACHT,   cr, cg, cb, cw); break;
    case 9:  ShowWord(LC_NEGEN,  cr, cg, cb, cw); break;
    case 10: ShowWord(LC_TIEN,   cr, cg, cb, cw); break;
    case 11: ShowWord(LC_ELF,    cr, cg, cb, cw); break;
    case 12: ShowWord(LC_TWAALF, cr, cg, cb, cw); break;
    default:
    break;
  }
}

void ReadTime()
{
  uren = hour();
  minuten = minute();
  seconden = second();
  dag = day();
  maand = month();
  jaar = year();  
}

void Check_special_dates()
{
  Serial.println("controle special dates");
  /*if ((maand == XMAS_MONTH) && ((dag == XMAS_DAY_1) || (dag == XMAS_DAY_2)))
  {
    Serial.println("kerst");
    SetAll(0, 0, 0, 0, 0);                         // clear all
    ShowWord(1, 104, cr, cg, cb, cw);              // o
    pixels.setPixelColor(POS_KB_1, pixels.Color(0,white,0));
    pixels.show();
    delay(100);
    pixels.setPixelColor(POS_KB_2, pixels.Color(0,white,0));
    pixels.setPixelColor(POS_KB_3, pixels.Color(0,white,0)); 
    pixels.show();
    delay(100);
    pixels.setPixelColor(POS_KB_4, pixels.Color(0,white,0));
    pixels.setPixelColor(POS_KB_5, pixels.Color(0,white,0));    
    pixels.show();
    delay(100);
    pixels.setPixelColor(POS_KB_6, pixels.Color(0,white,0));
    pixels.setPixelColor(POS_KB_7, pixels.Color(0,white,0));    
    pixels.show();
    delay(100);
    pixels.setPixelColor(POS_KB_8, pixels.Color(0,white,0));
    pixels.setPixelColor(POS_KB_9, pixels.Color(0,white,0));
    pixels.show();
    delay(100);
    pixels.setPixelColor(POS_KB_10, pixels.Color(0,white,0));
    pixels.setPixelColor(POS_KB_11, pixels.Color(0,white,0));
    pixels.show();
    delay(100);
    pixels.setPixelColor(POS_KB_12, pixels.Color(0,white,0));
    pixels.setPixelColor(POS_KB_13, pixels.Color(0,white,0));
    pixels.show();
    delay(100);
    for (i = POS_KB_14; i < POS_KB_14 + 9; i++) pixels.setPixelColor(i, pixels.Color(0,white,0));
    pixels.show();
    delay(100);
    pixels.setPixelColor(POS_KB_15, pixels.Color(white/4,white/4,white));
    for (i = POS_KB_16; i < POS_KB_16 + 3; i++) pixels.setPixelColor(i, pixels.Color(white/4,white/4,white));
    pixels.show();
    delay(100);
    pixels.setPixelColor(POS_KBL_1, pixels.Color(white,white,0));
    pixels.show();
    delay(100);
    pixels.setPixelColor(POS_KBL_4, pixels.Color(white,white,0));
    pixels.show();
    delay(100);
    pixels.setPixelColor(POS_KBL_6, pixels.Color(white,white,0));
    pixels.show();
    delay(100);
    pixels.setPixelColor(POS_KBL_7, pixels.Color(white,white,0));
    pixels.show();
    delay(100);
    pixels.setPixelColor(POS_KBL_2, pixels.Color(white,white,0));
    pixels.show();
    delay(100);
    pixels.setPixelColor(POS_KBL_8, pixels.Color(white,white,0));
    pixels.show();
    delay(100);
    pixels.setPixelColor(POS_KBL_3, pixels.Color(white,white,0));
    pixels.show();
    delay(100);
    pixels.setPixelColor(POS_KBL_5, pixels.Color(white,white,0));
    pixels.show();
    delay(100);
    pixels.setPixelColor(POS_KBL_9, pixels.Color(white,white,0));
    pixels.show();
    delay(100);
    pixels.setPixelColor(POS_KBL_9, pixels.Color(white,white,64));
    pixels.show();
    delay(100);
    pixels.setPixelColor(POS_KBL_10, pixels.Color(white,white,64));
    pixels.show();
    delay(100);
    pixels.setPixelColor(POS_KBL_11, pixels.Color(white,white,64));
    pixels.show();
    delay(500);
    pixels.setPixelColor(POS_KBL_12, pixels.Color(white/4,0,0));
    pixels.show();
    delay(100);
    pixels.setPixelColor(POS_KBL_12, pixels.Color(white/2,0,0));
    pixels.show();
    delay(100);
    pixels.setPixelColor(POS_KBL_12, pixels.Color(white,0,0));
    pixels.show();
    delay(100);
    pixels.setPixelColor(pgm_read_byte_near(SNOWFLAKE_1), pixels.Color(white,white,white));
    pixels.setPixelColor(pgm_read_byte_near(SNOWFLAKE_2), pixels.Color(white,white,white));
    for (i= 1; i < 11; i++)
    {
      Serial.print("i = ");
      Serial.println(i);
      pixels.setPixelColor(pgm_read_byte_near(SNOWFLAKE_1 + i - 1), pixels.Color(0,0,0));
      pixels.setPixelColor(pgm_read_byte_near(SNOWFLAKE_2 + i - 1), pixels.Color(0,0,0));
      pixels.setPixelColor(pgm_read_byte_near(SNOWFLAKE_1 + i), pixels.Color(white,white,white));
      pixels.setPixelColor(pgm_read_byte_near(SNOWFLAKE_2 + i), pixels.Color(white,white,white));
      pixels.show();      
      delay(200);
    }
    pixels.setPixelColor(POS_KBS_3, pixels.Color(white,white,white));
    pixels.show();
    delay(150);
    pixels.setPixelColor(POS_KBS_5, pixels.Color(white,white,white));
    pixels.show();
    delay(100);
    pixels.setPixelColor(POS_KBS_8, pixels.Color(white,white,white));
    pixels.show();
    delay(150);
    pixels.setPixelColor(POS_KBS_1, pixels.Color(white,white,white));
    pixels.show();
    delay(50);
    pixels.setPixelColor(POS_KBS_9, pixels.Color(white,white,white));
    pixels.show();
    delay(200);
    pixels.setPixelColor(POS_KBS_7, pixels.Color(white,white,white));
    pixels.show();
    delay(250);
    pixels.setPixelColor(POS_KBS_2, pixels.Color(white,white,white));
    pixels.show();
    delay(150);
    pixels.setPixelColor(POS_KBS_6, pixels.Color(white,white,white));
    pixels.show();
    delay(100);
    pixels.setPixelColor(POS_KBS_4, pixels.Color(white,white,white));
    pixels.show();    
    delay(10000);
    Clear_all();
    for (i = POS_XMAS_1; i < POS_XMAS_1 + 5; i++) pixels.setPixelColor(i, pixels.Color(0,white,0));
    for (i = POS_XMAS_2; i < POS_XMAS_2 + 5; i++) pixels.setPixelColor(i, pixels.Color(0,white,0));
    pixels.setPixelColor(POS_XMAS_1, pixels.Color(white,0,0)); // red first character
    pixels.setPixelColor(POS_XMAS_2, pixels.Color(white,0,0)); // red first character
    pixels.show();
    special_event_timer = SPECIAL_EVENT_TIME;
    special_dates = 1;
  }
  if ((maand == NEWYEAR_MONTH) && (dag == NEWYEAR_DAY))
  {
    Clear_all();
    for (i = POS_NEWYEAR_1; i < POS_NEWYEAR_1 + 8; i++) pixels.setPixelColor(i, pixels.Color(white,0,0));
    for (i = POS_NEWYEAR_2; i < POS_NEWYEAR_2 + 9; i++) pixels.setPixelColor(i, pixels.Color(white,0,0));
    pixels.setPixelColor(POS_NEWYEAR_1, pixels.Color(0,0,white)); // blue first character
    pixels.setPixelColor(POS_NEWYEAR_2, pixels.Color(0,0,white)); // blue first character    
    pixels.show();
    special_event_timer = SPECIAL_EVENT_TIME;
    special_dates = 1;
  }
  if ((birthday[0] && (birthday_day[0] == days) && (birthday_month[0] == months)) | (birthday[1] && (birthday_day[1] == days) && (birthday_month[1] == months)) | (birthday[2] && (birthday_day[2] == days) && (birthday_month[2] == months)) | (birthday[3] && (birthday_day[3] == days) && (birthday_month[3] == months)))
  {
    Clear_all();
    pixels.setPixelColor(POS_BIRTHDAY_1 + 0, pixels.Color(    0,    0,white)); // colour character
    pixels.setPixelColor(POS_BIRTHDAY_1 + 1, pixels.Color(    0,white,    0)); // colour character
    pixels.setPixelColor(POS_BIRTHDAY_1 + 2, pixels.Color(    0,white,white)); // colour character
    pixels.setPixelColor(POS_BIRTHDAY_1 + 3, pixels.Color(white,    0,    0)); // colour character
    pixels.setPixelColor(POS_BIRTHDAY_1 + 4, pixels.Color(white,    0,white)); // colour character
    pixels.setPixelColor(POS_BIRTHDAY_2 + 0, pixels.Color(white,white,    0)); // colour character
    pixels.setPixelColor(POS_BIRTHDAY_2 + 1, pixels.Color(white,white,white)); // colour character
    pixels.setPixelColor(POS_BIRTHDAY_2 + 2, pixels.Color(white,    0,white)); // colour character
    pixels.setPixelColor(POS_BIRTHDAY_3 + 0, pixels.Color(    0,white,white)); // colour character
    pixels.setPixelColor(POS_BIRTHDAY_3 + 1, pixels.Color(white,    0,    0)); // colour character
    pixels.setPixelColor(POS_BIRTHDAY_3 + 2, pixels.Color(    0,white,    0)); // colour character
    pixels.setPixelColor(POS_BIRTHDAY_3 + 3, pixels.Color(    0,    0,white)); // colour character
    pixels.setPixelColor(POS_BIRTHDAY_4 + 0, pixels.Color(white,white,white)); // colour character
    pixels.setPixelColor(POS_BIRTHDAY_4 + 1, pixels.Color(white,    0,white)); // colour character
    pixels.setPixelColor(POS_BIRTHDAY_4 + 2, pixels.Color(    0,white,white)); // colour character    
    pixels.show();
    special_event_timer = SPECIAL_EVENT_TIME;
    special_dates = 1;
  }
}*/

