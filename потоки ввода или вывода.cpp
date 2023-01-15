#define _CRT_SECURE_NO_WARNINGS
#include "Student.cpp"

//rename (old_name, new_name)
//remove(name)
//_findfirst(files, "path") //



//1) ofstream/ifstream - write to file/read from file
//fstream - w/r
//2) create file, open file
//3) file-of/if
//4) w/r
//5) non file-of/if
//6) close file

void main()
{
	srand(time(0));
	//FileRename();
	//cout << "**********" << endl;
	//FileRemove();
	SetColor(1, 0);
	cout << "**********" << endl;
	//Student st1("Vasya", "Ivanov", 20), st2("Petr", "Petrov", 25), st3("Irina", "Sidorova", 18), st4("Fedr", "Smirnov", 20), st5("Olga", "Sinichkina", 18), st_mas[5] = { st1, st2, st3, st4, st5 };
	//for (int i = 0; i < 5; i++) cout << st_mas[i] << endl;
	//ofstream fout;
	//fout.open("C:\\Users\\student.ITSTEP\\Desktop\\student_all.txt", ofstream::out);
	//if (!fout.is_open()) cout << "error" << endl;
	//else
	//{
	//	cout << "file's open" << endl;
	//	for (int i = 0; i < 5; i++) fout.write((char*)&st_mas[i], sizeof(Student));
	//	cout << "end of write" << endl;
	//	fout.close();
	//	system("C:\\Users\\student.ITSTEP\\Desktop\\student_all.txt");
	//}

	//ifstream fin;
	//Student st_mas_new[5] = {};
	//fin.open("C:\\Users\\student.ITSTEP\\Desktop\\student_all.txt");
	//if (!fin.is_open()) cout << "error" << endl;
	//else
	//{
	//	int i = 0;
	//	cout << "***********" << endl;
	//	cout << "file's open" << endl;
	//	while (fin.read((char*)&st_mas_new[i], sizeof(Student)))
	//	{
	//		st_mas_new[i].Print();
	//		i++;
	//	}
	//	fin.close();
	//	cout << "**********" << endl;
	//	cout << "end of read" << endl;
	//}
	Student classman;
	classman.undergraduate();
	classman.years();
}