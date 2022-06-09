#include <iostream>
#include <fstream>
#include <cstring>
#include <windows.h>

using namespace std;

const int maxlen = 255;
#pragma pack(push, 1) //директиви компілятору для вирівнювання полів структур
struct sworker {
    char name_film[maxlen];
    char name_prod[maxlen];
    int year_film;
    char name_country[maxlen];
};
#pragma pack(pop) //директиви компілятору для вирівнювання полів структур

sworker arr[maxlen];
int worker_index = 0;

int menu();//прототипи функцій
void readFromFile(const char* fileName);
void saveToFile(const char* fileName);
void addNew();
void del(const char* fileName);
void sort(const char* fileName);
void change(const char* fileName);

int main()
{
    setlocale(LC_ALL, "Russian");//забезпечення використання кирилиці
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    while (1) {  //створення нескінченного циклу з меню вибору, виклик відповідних функцій 
        switch (menu()) {
        case 1:
            readFromFile("file.dat");
            break;
        case 2:
            saveToFile("file.dat");
            break;
        case 3:
            addNew();
            break;
        case 4:
            del("file.dat");
            break;
        case 5:
            sort("file.dat");
            break;
        case 6:
            change("file.dat");
            break;
        case 7:
            return 0;
        default:
            cout << "Невірний вибір" << endl;
        }
    }
}
int menu()//функція показує пункти меню вибору
{
    cout << "\n";
    int ans;
    cout << "Оберіть\n";
    cout << "1-для зчитування з файла\n";
    cout << "2-для запису в файл\n";
    cout << "3-для додавання запису\n";
    cout << "4-для видалення запису\n";
    cout << "5-сортувати по назві\n";
    cout << "6-зміна запису\n";
    cout << "7-для виходу\n";
    cout << "\n";
    cout << "Ваш вибір  ";
    cin >> ans;
    return ans;
}
void saveToFile(const char* fileName) //функція, що записує дані у бінарний файл
{
    ofstream f;
    f.open(fileName, ios::binary);
    f.write((char*)arr, sizeof(sworker) * worker_index);
    f.close();
}
void readFromFile(const char* fileName) //функція, що зчитує дані з бінарного файлу
{
    ifstream f;
    f.open(fileName, ios::binary);
    if (!f) {
        cout << "Файлу не існує";
    }
    else {
        sworker worker;
        worker_index = 0;
        while (1) {
            f.read((char*)&worker, sizeof(worker));
            if (f.eof())
                break;
            arr[worker_index] = worker;
            worker_index++;
        }
        f.close();
        cout << "Дані зчитано з файлу\n";
        for (int i = 0; i < worker_index; i++) {
            cout << i + 1 << "\t" << arr[i].name_film << "\t" << arr[i].name_prod << "\t" << arr[i].name_country << "\t" << arr[i].year_film << endl;
        }
    }
}
void addNew()//функція, що додає(створює) новий запис
{
    cout << "Додавання нового запису\n\n";
    cout << "Запис номер " << worker_index + 1 << "\n";
    cin.ignore();
    cout << "Введіть назву фільму  ";
    cin.getline(arr[worker_index].name_film, maxlen);
    cout << "Введіть ім'я режисера цього фільму  ";
    cin.getline(arr[worker_index].name_prod, maxlen);
    cout << "Введіть назву країни ";
    cin.getline(arr[worker_index].name_country, maxlen);
    cout << "Введіть рік випуску цього фільму  ";
    cin >> arr[worker_index].year_film;
    worker_index++;
    cout << "\n";
    for (int i = 0; i < worker_index; i++) {
        cout << i + 1 << "\t" << arr[i].name_film << "\t" << arr[i].name_prod << "\t" << arr[i].name_country << "\t" << arr[i].year_film << endl;
    }
    cout << "\n";

    saveToFile("file.dat");

    cout << "Введені дані збережено до файлу\n";
}

void del(const char* fileName)//функція, що видаляє запис 
{
    ifstream f;
    f.open(fileName, ios::binary);
    if (!f) {
        cout << "Файлу не існує";
    }
    int d;
    cout << "Оберіть номер запису, який необхідно видалити ";
    cin >> d;
    for (int i = d - 1; i < worker_index; i++)
    {
        arr[i] = arr[i + 1];    // Зміщую всі елементи на 1 вліво, щоб той який потрібно видалити зник
    }
    worker_index--;
    f.close();
    cout << "\n";
    for (int i = 0; i < worker_index; i++) {
        cout << i + 1 << "\t" << arr[i].name_film << "\t" << arr[i].name_prod << "\t" << arr[i].name_country << "\t" << arr[i].year_film << endl;
    }
    cout << "\n";

    saveToFile("file.dat");
}

void sort(const char* fileName)//Функція, що сортує по першому пункту ( назві )
{
    ifstream f;
    f.open(fileName, ios::binary);
    if (!f) {
        cout << "Файлу не існує";
    }
    else {
        for (int j = 0; j < worker_index - 1; j++) {
            int k = j;
            for (int i = j; i < worker_index - 1; i++) {
                if (arr[k].name_film[0] > arr[i + 1].name_film[0]) {  // Порівнюю перші символи перших слів k та i+1 рядків 
                    k = i + 1;  // Зберігаю індекс того рядку де перший символ перошого слова більший ( в алфавіті стоїть попереду )
                }
            }
            sworker temp = arr[k];  //
            arr[k] = arr[j];        // Міняю рядки місцями ( на перше місце, там де буква в алфавіті йде першою )
            arr[j] = temp;          // Потім k збільшується на 1 (j++, k=j) і рядок який я перемістив ми не будемо розглядати далі
        }
    }
    f.close();
    for (int i = 0; i < worker_index; i++) {
        cout << i + 1 << "\t" << arr[i].name_film << "\t" << arr[i].name_prod << "\t" << arr[i].name_country << "\t" << arr[i].year_film << endl;
    }
    cout << "\n";

    saveToFile("file.dat");
}

void change(const char* fileName)//Функція, що змінює запис
{
    ifstream f;
    f.open(fileName, ios::binary);
    if (!f) {
        cout << "Файлу не існує";
    }
    else {
        int d;
        cout << "Оберіть номер запису, який необхідно змінити  ";
        cin >> d;
        cout << "Введіть нову назву фільму  ";
        cin >> arr[d - 1].name_film;
        cout << "Введіть ім'я режисера цього фільму  ";
        cin >> arr[d - 1].name_prod;
        cout << "Введіть назву країни  ";
        cin >> arr[d - 1].name_country;
        cout << "Введіть рік випуску цього фільму  ";
        cin >> arr[d - 1].year_film;
    }
    f.close();
    saveToFile("file.dat");

    cout << "Введені дані збережено до файлу\n";
}
