# include <stdio.h>
#include <stdlib.h>

/*
para gnuplot en 3D es splot "blaaa"
*/
void  marcha_x(double *x, int npoints);
void  marcha_y(double *y, int npoints);
void  marcha_z(double *z, int npoints);

double main (double argc, char **argv){
  int n_puntos;
  int r=10; // radio de la esfera 
  double *x; // listaX
  double *y;
  double *z;
  int k;
  FILE *fileout;

  x=malloc(n_puntos*sizeof(double));
  y=malloc(n_puntos*sizeof(double));
  z=malloc(n_puntos*sizeof(double));

  n_puntos = atoi(argv[1]); 

  /*debe  imprimir  toda la lista cada valor de x* con y y z para el archivo fila 1*/
  marcha_x(x, n_puntos);
  marcha_y(y, n_puntos);
  marcha_z(z, n_puntos);

  fileout=fopen("Esfeta_Homogeneas.txt", "w");

  for (k=0;k<=n_puntos;k){
   
    fprintf(fileout, "%f %f %f\n", x[k], y[k], z[k]);
}
  fclose(fileout);

  return 0;
}

void  marcha_x(double *x, int npoints){
  double X=0.0;
  int i;
    for (i=0;i<npoints;i++){
    X=2.0*(drand48()-0.5);
    x[i]=X;
    }
}

void  marcha_y(double *y, int npoints){
  double Y=0.0;
  int i;
    for (i=0;i<npoints;i++){
    Y=2.0*(drand48()-0.5);
    y[i]=Y;
    }
}

void  marcha_z(double *z, int npoints){
  double Z=0.0;
  int i;
    for (i=0;i<npoints;i++){
    Z=2.0*(drand48()-0.5);
    z[i]=Z;
    }
}
