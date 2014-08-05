#ifndef __CONTROLAR_MATRIZ__
#define __CONTROLAR_MATRIZ__

  int CasasVazias(int mat[4][4]);
  int verificar_estado(int matriz[4][4]);
  int verificar_se_pode_preencher (int matriz[4][4]);
  void comandar_mat(int matriz[4][4]);
  void subir_mat(int matriz[4][4]);
  void descer_mat(int matriz[4][4]);
  void esquerda_mat(int matriz[4][4]);
  void direita_mat(int matriz[4][4]);
  void zerar_mat(int matriz[4][4]);

  extern int venceu;


#endif
