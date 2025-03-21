#include <stdio.h>
#include <string.h>

#define MAX_TENTATIVAS 3

int main() {
    char usuario_correto[] = "admin";
    char senha_correta[] = "1234";
    char usuario[20], senha[20];
    int tentativas = 0;
    
    printf("*************************************\n\n");
    printf("******SEJA BEM VINDO******\n\n");
    printf("*************************************\n\n");

    printf("1) - CADASTRO DE CLIENTES\n");
    printf("2) - CADASTRO DE CORRETORES\n");
    printf("3) - SAIR DO SISTEMA\n\n");    
    printf("DIGITE A OPÃ‡ÃƒO DESEJADA: ");
    scanf("%d", &opcao);

    getchar();    

}

    while (tentativas < MAX_TENTATIVAS) {
        printf("Usuario: ");
        scanf("%s", usuario);
        printf("Senha: ");
        scanf("%s", senha);

        // Verifica se usuário e senha estão corretos
        if (strcmp(usuario, usuario_correto) == 0 && strcmp(senha, senha_correta) == 0) {
            printf("Login bem-sucedido!\n");
            return 0;
        } else {
            printf("Usuário ou senha incorretos. Tente novamente.\n");
            tentativas++;
        }
    }

    printf("Numero máximo de tentativas excedido. Acesso bloqueado.\n");
    return 1;
}