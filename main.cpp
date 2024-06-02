#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Tarefa {
    int id;
    string titulo;
    string descricao;
    string dataVencimento;
    int status;
};

vector<Tarefa> listaTarefas;

void adicionarTarefa() {
    Tarefa novaTarefa;
    cout << "ID: "; cin >> novaTarefa.id;
    cin.ignore(); // Limpar o buffer de entrada
    cout << "Titulo: "; getline(cin, novaTarefa.titulo);
    cout << "Descricao: "; getline(cin, novaTarefa.descricao);
    cout << "data vencimento: "; getline(cin, novaTarefa.dataVencimento);
    cout << "Status (1- Pendente, 2- Em Progresso, 3- Concluida): "; cin >> novaTarefa.status;
    listaTarefas.push_back(novaTarefa);
    cout << "Tarefa adicionada com sucesso!" << endl;

    system("clear");
}

void editarTarefa() {
    system("clear");

    int id;
    cout << "Digite o ID da tarefa que deseja editar: ";
    cin >> id;
    cin.ignore(); // Limpar o buffer de entrada
    for (auto& tarefa : listaTarefas) {
        if (tarefa.id == id) {
            cout << "Novo Titulo: "; getline(cin, tarefa.titulo);
            cout << "Nova Descricao: "; getline(cin, tarefa.descricao);
            cout << "data vencimento: "; getline(cin, tarefa.dataVencimento);
            cout << "Novo Status (1- Pendente, 2- Em Progresso, 3- Concluida): "; cin >> tarefa.status;
            cout << "Tarefa editada com sucesso!" << endl;
            return;
        }
    }
    cout << "Tarefa nao encontrada!" << endl;
}

void visualizarTarefas() {
    for (const auto& tarefa : listaTarefas) {
        cout << "ID: " << tarefa.id << endl;
        cout << "Titulo: " << tarefa.titulo << endl;
        cout << "Descricao: " << tarefa.descricao << endl;
        cout << "data vencimento: "<< tarefa.dataVencimento << endl;
        cout << "Status: " << tarefa.status << endl;
        cout << "---------------------------" << endl;
    }
}

void removerTarefa() {
    system("clear");

    int id;
    cout << "Digite o ID da tarefa que deseja remover: ";
    cin >> id;
    cin.ignore(); // Limpar o buffer do cin
    for (auto it = listaTarefas.begin(); it != listaTarefas.end(); ++it) {
        if (it->id == id) {
            listaTarefas.erase(it);
            cout << "Tarefa removida com sucesso!" << endl;
            return;
        }
    }
    cout << "Tarefa não encontrada!" << endl;
}


void buscarTarefa() {
    string titulo;
    cout << "Digite o titulo da tarefa que deseja buscar: ";
    getline(cin, titulo);
    for (const auto& tarefa : listaTarefas) {
        if (tarefa.titulo == titulo) {
            cout << "ID: " << tarefa.id << endl;
            cout << "Titulo: " << tarefa.titulo << endl;
            cout << "Descricao: " << tarefa.descricao << endl;
            cout << "Data de Vencimento: " << tarefa.dataVencimento << endl;
            cout << "Status: " << tarefa.status << endl;
            return;
        }
    }
    cout << "Tarefa não encontrada!" << endl;
}

void filtrarTarefasPorStatus() {
    int status;
    cout << "Digite o status para filtrar (1- Pendente, 2- Em Progresso, 3- Concluida): ";
    cin >> status;
    for (const auto& tarefa : listaTarefas) {
        if (tarefa.status == status) {
            cout << "ID: " << tarefa.id << endl;
            cout << "Titulo: " << tarefa.titulo << endl;
            cout << "Descricao: " << tarefa.descricao << endl;
            cout << "data vencimento: " << tarefa.dataVencimento << endl;
            cout << "Status: " << tarefa.status << endl;
            cout << "--------------------------" << endl;
        }
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
        cout << "6. Filtrar Tarefas por status" << endl;
        cout << "0. Sair" << endl;
        cout << "--------------------------------------" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cout << "--------------------------------------" << endl;

        switch(opcao){
            case 1:adicionarTarefa(); break;
            case 2:visualizarTarefas(); break;
            case 3:editarTarefa(); break;
            case 4:removerTarefa(); break;
            case 5:buscarTarefa(); break;
            case 6:filtrarTarefasPorStatus(); break;
            case 0: cout << "encerrando..." <<endl; return 0; break;
        } 
    } while (opcao != 0);
    return 0;
}