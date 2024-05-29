#include <iostream>
#include <string>

using namespace std;

const int maxTarefas = 50;
int ids[maxTarefas];
string titulo[maxTarefas];
string descricao[maxTarefas];
int status[maxTarefas];
int dia[maxTarefas];
int mes[maxTarefas];
int ano[maxTarefas];
int numTarefas = 0;

int gerarID() {
    static int proximoID = 1; // Inicializa o próximo ID como 1 na primeira chamada da função
    if (proximoID > 50){
        cout << "full" << endl;
    }
        return proximoID++;
}

int IDAnterior(){
    int novoID;
    int idAntes;
    idAntes = novoID - 1;
    return idAntes;
}


void adicionarTarefa() {
    string titulo2;
    string descricao2; 
    int dia2;
    int mes2;
    int ano2;
    int novoID = gerarID(); 
    
    cout << "-----adicionar Nova Tarefa-----"<<endl;
    ids[maxTarefas] = novoID;
    cout << "ID: " << novoID << endl;
    cout << "titulo: "; getline(cin, titulo2); 
    cout << "descrição: "; getline(cin, descricao2);
    cout << "dia: "; cin >> dia2; cin.ignore(); 
    cout << "mês: "; cin >> mes2; cin.ignore(); 
    cout << "ano: "; cin >> ano2; cin.ignore(); 
    cout << "status (1 - pendente, 2 - em Progresso, 3 - concluída): ";
    cin >> status[numTarefas];

    titulo2 = titulo[numTarefas];
    descricao2 = descricao[numTarefas];
    dia2 = dia[numTarefas];
    mes2 = mes[numTarefas];
    ano2 = ano[numTarefas];

    if (status[numTarefas] >= 1 && status[numTarefas] <= 3) {
        cout << "-----tarefa adicionada com sucesso!-----"<<endl;
        numTarefas++;
    }else {
        cout << "!!não foi possível salvar a tarefa!!"<<endl;
    }
     system("clear");
}

void visualizar() {
    cout << "-----lista de tarefas-----"<<endl;
    for (int i = 0; i < numTarefas; i++) {
        cout << "ID: " << IDAnterior << endl;
        cout << "titulo: " << titulo[i] <<endl;
        cout << "descrição: " << descricao[i] <<endl;
        cout << "dia: " << dia[i] << endl;
        cout << "mês: " << mes[i] << endl;
        cout << "ano: " << ano[i] << endl;
        cout << "status: ";
        if (status[i] == 1) {
            cout << "pendente" <<endl;
        } else if (status[i] == 2) {
            cout << "em progresso" << endl;
        } else if (status[i] == 3) {
            cout << "concluída" << endl;
        }
        cout << "-------------------------" <<endl;
    }
}

int main(){
    int opcao;

    do {
        cout << "--------------------------------------" << endl;
        cout << "1. Adicionar Tarefa" << endl;
        cout << "2. Visualizar Tarefas" << endl;
        cout << "3. Editar Tarefa" << endl;
        cout << "4. Remover Tarefa" << endl;
        cout << "5. Buscar Tarefa" << endl;
        cout << "6. Filtrar Tarefas por nome" << endl;
        cout << "0. Sair" << endl;
        cout << "--------------------------------------" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch(opcao){
            case 1:adicionarTarefa(); break;
            case 2:visualizar(); break;
            case 3: cout << "Editar Tarefa" << endl; break;
            case 4: cout << "Remover Tarefa" << endl; break;
            case 5: cout << "Buscar Tarefa" << endl; break;
            case 6: cout << "Filtrar Tarefas por nome" << endl; break;
            case 0: cout << "" <<endl << ; return 0; break;
        } 
    } while (opcao != 0);
    return 0;
}