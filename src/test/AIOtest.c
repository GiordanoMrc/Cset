int main(int p, int g, float k, int a) {
  set c;
  { int a; a = 15; }
  float b;
  b = 4.79;
  a = (b + 7 + c);  // variavel a fora de escopo.
  c=EMPTY;
  c = main(1);   // não pode atribuir esse tipo. Número errado de argumentos
  c = main(1,2); // não pode atribuir esse tipo. Número errado de argumentos
  c = main();   // não pode atribuir

  return c; // não pode retornar isso
}