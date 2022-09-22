#include <pthread.h>
#include <stdio.h>
#define MAX 100
int cpt = 0;



void *count(void *data)
{
    int i;
    printf("je suis le thread numero %d  \n", (int)data);
    for (i = 0; i < MAX; i++) {
        cpt++;
        printf("%d ", cpt);
    }
    return (NULL);
}

int main(void)
{
    pthread_t t1, t2;

    pthread_create(&t1, NULL, count, (void *)1);
    pthread_create(&t2, NULL, count, (void *)2);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    printf("Compteur : %d", cpt);
    return (0);
}