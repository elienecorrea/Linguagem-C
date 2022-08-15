//Autora: Eliene Correa
//Controle de paciente 

#include <stdio.h>
#include <string.h>
 main()
                    
    {  //inicio       
    char nom[10][21], cod[10][21], fon[10][21], dat[10][21], hor[10][21];   // Armazena ate 20 caracteres em cada uma das 10 posicoes do vetor
    char nomeproc[20], codproc[20]; // variaveis de trabalho, string de caracteres para guardar  nome e codigo
    int  i, j, encontrado, op, opc, opcao;// variaveis inteiras 
    j=0; 

	do 
    {     
    system ("cls"); // limpa a tela
    printf ("    ***      ***  *******  *******    ***     ****       *****      ****    \n"); 
    printf ("    ****    ****  *******  ********   ***   ********    *******    *******  \n"); 
    printf ("    ** **  ** **  ***      ***   ***  ***  ***    ***  ***   ***  ***   *** \n"); 
    printf ("    **  ****  **  *******  ***   ***  ***  ***         ***   ***   ***      \n"); 
    printf ("    **   **   **  ***      ***   ***  ***  ***    ***  ***   ***       ***  \n"); 
    printf ("    **   **   **  *******  ********   ***   ********    *******   ***   *** \n"); 
    printf ("    **        **  *******  *******    ***     ****       *****      ******  \n"); 
    printf ("\n\t.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._._.-.\n\n\n"); 
    printf ("\tDtr: ARLLEY MAXIMUS\t   &\t   Dtra: YELLRA KATHLEEN\n\n\n"); 
    printf ("\t._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-.\n\n\n"); 
    printf ("\n\n\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n"); 
    printf ("\t*\t                                                *\n"); 
    printf ("\t*\t        Controle de Pacientes                   *\n"); 
    printf ("\t*\t                                                *\n");
    printf ("\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf ("\t*                                                       *\n");
    printf ("\t*\t\t(1) - INCLUIR PACIENTE                  *\n"); 
    printf ("\t*\t\t(2) - ALTERAR PACIENTE                  *\n");  
    printf ("\t*\t\t(3) - PROCURAR PACIENTE                 *\n"); 
    printf ("\t*\t\t(4) - EXCLUIR PACIENTE                  *\n");
    printf ("\t*\t\t(5) - LISTAR PACIENTE                   *\n"); 
    printf ("\t*\t\t(6) - SAIR                              *\n");
    printf ("\t*                                                       *\n");
    printf ("\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n"); 
    printf ("\n\n\tEscolha uma opcao.\n\n\topcao= ");  
    scanf("%d", &op); // variavel inteira para ler a opcao do menu
	system("cls");  //limpa a tela
	
	switch (op) // comando de decisao
	
	     { // abre o case/escolha
  case 1: // escolha 1
        printf ("\n\t\t\t*----------------------*\n"); 
        printf ("\a\t\t\t|  INCLUINDO PACIENTE  |\n"); 
        printf ("\t\t\t*----------------------*\n\n");
        void incluir (char nom[10][21],int j) {
        }           
        printf ("\n\t(1) - Para o Doutor Arlley\tou\t(2) - Para a Doutora Yellra\n\n"); 
        printf ("Opcao: "); 
        scanf ("%d",&opcao); // variavel inteira para ler a opcao
              
         if (opcao==1) { // if/se
         j++;   // variavel inteira de incremento               
         printf ("\n\t-<-<-<-<-< INCLUIR PACIENTE PARA O DOUTOR ARLLEY >->->->->-\n");
         printf ("\nnome: ");  
         scanf ("%s",&nom[j]);  
         printf ("\ncodigo: "); 
         scanf ("%s",&cod[j]); 
         printf ("\ntelefone: "); 
         scanf ("%s",&fon[j]); 
         printf ("\ndata: "); 
         scanf ("%s",&dat[j]); 
         printf ("\nhora: "); 
         scanf ("%s",&hor[j]); 
         printf("\n\n\t-<-<-<-<-< CONSULTA MARCADA COM SUCESSO >->->->->- \n\n"); 
         system("pause"); 
         } // fim-if/se
          
         else if (opcao==2) { // else if/senao se
              j++;                
              printf ("\n\t-<-<-<-<-< INCLUIR PACIENTE PARA A DOUTORA YELLRA >->->->->- \n");
              printf ("\nnome: ");
              scanf ("%s",&nom[j]);
              printf ("\ncodigo: ");
              scanf ("%s",&cod[j]);
              printf ("\ntelefone: ");
              scanf ("%s",&fon[j]);
              printf ("\ndata: ");
              scanf ("%s",&dat[j]);
              printf ("\nhora: ");
              scanf ("%s",&hor[j]);
              printf("\n\n\t-<-<-<-<-< CONSULTA MARCADA COM SUCESSO >->->->->- \n\n");
              system("pause");
              } // fim-if/se
              break; // quebra a execucao do comando
         
  case 2: // escolha 2
       printf ("\n\t\t\t*----------------------*\n");   
       printf ("\a\t\t\t|  ALTERANDO PACIENTE  |\n");
       printf ("\t\t\t*----------------------*\n\n");      
       printf("\n\nInforme o paciente que deseja alterar: ");
       scanf("%s",nomeproc); // variavel de trabalho
       encontrado=0; 
  
       for (i=1; i<=j; i++) { // loop for/para 
      
        if(strcmp(nomeproc,nom[i])==0) { // string de comparacao  
        printf("\nEncontrado na posicao: %d",i);
        printf("\n\nInforme o novo nome: ");
        scanf("%s",&nom[j]);
        printf("\nInforme o novo codigo: ");
        scanf("%s",&cod[j]);
        printf("\nInforme o novo telefone: ");
        scanf("%s",&fon[j]);
        printf("\nInforme a nova data: ");
        scanf("%s",&dat[j]);
        printf("\nInforme a nova hora: ");
        scanf("%s",&hor[j]);
        printf("\n\n");
        encontrado=1;
        printf ("\n\n\t-<-<-<-<-< PACIENTE ALTERADO COM SUCESSO >->->->->-\n\n");
        system("pause");
        }  //fim-for/para
        }  //fim-if/se
        
          if (encontrado==0){ // if/se 
          printf("\n\n\t-<-<-<-<-< PACIENTE NAO ENCONTRADO >->->->->-\n\n");
          system("pause");
          } //fim-if/se
          break; // quebra do comando
    
  case 3: // escolha 3
       printf ("\n\t\t\t*-----------------------*\n");   
       printf ("\a\t\t\t|  PROCURANDO PACIENTE  |\n");
       printf ("\t\t\t*-----------------------*\n\n");
       printf ("\n\t(1) - Por nome\t\tou\t  (2) - Por codigo\n\n"); 
       printf ("Opcao: ");
       scanf ("%d",&opc); //ler a opcao escolhida  
              
        if (opc==1) { //if/se       
        printf ("\n\tDigite o nome: ");
        scanf("%s",nomeproc);
        encontrado=0;
              
        for (i=1; i<=j; i++) { // loop for
           
         if(strcmp(nomeproc,nom[i])==0) {  // string de comparacao
         printf("\n\n\t-<-<-<-<-< ENCONTRADO NA POSICAO %d >->->->->-\n",i);
         printf("\nNome: %s",nom[i]);
         printf("\ncodigo: %s",cod[i]); 
         printf("\nfone: %s",fon[i]);
         printf("\nData: %s",dat[i]);
         printf("\nHora: %s",hor[i]); 
         printf("\n\n");
         encontrado=1; 
         system("pause");
         }  //fim=if/se
         }  //fim-for/para
         }  //fim-if/se
             
          else if(opc==2) { // else if/senao se 
               printf ("\nDigite o codigo: ");
               scanf ("%s",codproc);
               encontrado=0;
  
               for (i=1; i<=j; i++) { // loop for
           
                if(strcmp(codproc,cod[i])==0) { //string de comparacao
                printf("\n\n\t-<-<-<-<-< ENCONTRADO NA POSICAO %d >->->->->-\n",i);
                printf("\nCodigo: %s",cod[i]); 
                printf("\nNome: %s",nom[i]);
                printf("\nfone: %s",fon[i]);
                printf("\nData: %s",dat[i]);
                printf("\nHora: %s",hor[i]); 
                printf("\n\n");
                encontrado=1;
                system("pause");
                }  //fim-if/se
                }  //fim-for/para
                }  //fim-if/se
                 if (encontrado==0){ // if/se 
                 printf("\n\n\t-<-<-<-<-< PACIENTE NAO ENCONTRADO >->->->->-\n\n");
                 system("pause"); 
                 } //fim-if/se
                 break; // interronpe o loop

   case 4:  // escolha 4
        printf ("\n\t\t\t*----------------------*\n");   
        printf ("\a\t\t\t|  EXCLUINDO PACIENTE  |\n");
        printf ("\t\t\t*----------------------*\n\n"); 
        printf("\n\nInforme o paciente que deseja excluir: ");
        scanf("%s",nomeproc); //ler o paciente que deseja excluir 
        encontrado=0; 
                
        for (i=1; i<=j; i++) { // loop for/para
      
         if(strcmp(nomeproc,nom[i])==0) {  // string de comparacao
         strcpy(nom[i],"");
         strcpy(cod[i],"");
         strcpy(fon[i],"");
         strcpy(dat[i],"");
         strcpy(hor[i],"");
         printf("\n\n\t-<-<-<-<-< PACIENTE %d EXCLUIDO >->->->->-\n",i);
         printf("\n\n");
         encontrado=1;
         system("pause");
         } //fim-for/para
         } //fim-if/se
                       
          if (encontrado==0){ // if/se 
           printf("\n\n\t-<-<-<-<-< PACIENTE NAO ENCONTRADO >->->->->-\n\n"); 
           system("pause");
           } //fim-if/se
           break; // interrompe o loop
    
    case 5:   //escolha 5      
         printf ("\n\t\t\t*---------------------*\n");   
         printf ("\a\t\t\t|  LISTANDO PACIENTE  |\n");
         printf ("\t\t\t*---------------------*\n\n");
         void listar (char nom[10][21],int j){ //funcao void listar
         int i; // variavel inteiro
         }
         printf ("\n-<-<-<-<-< LISTA DE PACIENTES COM CONSULTA MARCADA >->->->->-\n\n");
                        
         for (i=1; i<=j; i++) { // loop for/para
                             
         printf("\nNome: %s", nom[i]); 
         printf("\nCodigo: %s", cod[i]);
         printf("\nFone: %s", fon[i]);
         printf("\nData: %s", dat[i]);
         printf("\nHora: %s", hor[i]);
         printf("\n\n");
         } //fim-for/para
         system("pause");
                                 
         break; // interrompe o loop
 
    case 6: // escolha 6
         printf ("\t\tVoce escolheu a opcao sair.\n");// sair
         system("pause"); 
         break; //quebra o comando  
                   	
         default:  printf("\t\topcao Invalida.\n"); // será executada no caso de todas as opcoes darem zero e e opcional  	
         break; // quebra o comando
         } //fim-case/escolha
         } //fim-do
         
         while (op!=6); //se nao for nem um dos casos termina o prograna 

         } //fim

