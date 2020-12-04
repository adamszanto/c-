#include <stdio.h>
#include <stdlib.h>

int main()
{

  int adatsor1[9] = {2, 3, -1, 5, 4, -1, 2, 2, 4, 7};
  int adatsor2[9] = {2, 3,  4, 5, 4,  3, 2, 2, 4, 7};

  int kozos[9];

  for(int i = 0; i < 10; i++)
  {
      if(adatsor1[i] == adatsor2[i])
      {
          kozos[i] = 1;
      }
      else
      {
        kozos[i] = 0;
      }
  }

  // Ki�ratom az els� szakaszt, vizualiz�lva a hosszt
  printf("Folyo A oldala:\t\t");

  for(int i = 0; i < 10; i++)
  {
      if(adatsor1[i] < 0)
      {
          printf("%d ", adatsor1[i]);
      }
      else
      {
        printf("%d  ", adatsor1[i]);
      }
  }

  printf("\n");

  // Ki�ratom a h�d val�sz�n�s�thet� helyeit, ahol a 0 sz�m az elt�r� szint, az 1-es pedig a lehets�ges hidat reprezent�lja
  printf("Hid lehetseges helye:\t");

  for(int i = 0; i < 10; i++)
  {
      printf("%d  ", kozos[i]);
  }

  printf("\n");
  // Ki�ratom a t�loldalon l�v� szakaszt �s annak m�sodik adatsor�t, vizualiz�lva a hosszt, hasonl�an mint az els� adatsorn�l
  printf("Folyo B oldala:\t\t");
  for(int i = 0; i < 10; i++)
  {
      printf("%d  ", adatsor2[i]);
  }

}
