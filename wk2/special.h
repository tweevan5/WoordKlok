
void M2bAbout()
{
  SetAll(0, 0, 0, 0, 0);                         // clear all
  ShowWord(LW_MMB, cr, cg, cb, cw);              // het
  pixels.show();
  delay(1000);
  SetAll(0, 0, 0, 0, 0);                         // clear all
  ShowWord(2, 115, cr, cg, cb, cw);              // kl
  ShowWord(1, 104, cr, cg, cb, cw);              // o
  ShowWord(1, 81, cr, cg, cb, cw);               // k
  pixels.show();
  delay(1000);
  SetAll(0, 0, 0, 0, 0);                         // clear all
  ShowWord(LC_EEN, cr, cg, cb, cw);              // een
  pixels.show();
  delay(1000);
  SetAll(0, 0, 0, 0, 0);                         // clear all
  ShowWord(1, 128, cr, cg, cb, cw);              // s
  ShowWord(1, 131, cr, cg, cb, cw);              // w
  ShowWord(LC_DRIE, cr, cg, cb, cw);             // drie
  pixels.show();
  delay(1000);
  SetAll(0, 0, 0, 0, 0);                         // clear all
  ShowWord(LC_EEN, cr, cg, cb, cw);              // een
  pixels.show();
  delay(1000);
}