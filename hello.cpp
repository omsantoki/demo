void search(Inmates i)
{
    system("cls");
    time_t now = time(0);
    tm *ltm = localtime(&now);
    cout << "\n\n\t\t\t**********SEARCH************\n\n";
    string ID;
    cout << "\tEnter Inmate's ID : ";
    cin >> ID;

    ifstream in(Filename);

    if (!in)
    {
        cout << RED << "\tError 404: File can't Open!" << RESET << endl;
        Sleep(2000);
        return;
    }
    else
    {
        string line;
        unordered_map<string, pair<pair<string, string>, pair<string,string>>> inmates;

        while (getline(in, line))
        {
            stringstream ss(line);
            string word;
            getline(ss, word, ':');
            string dorm=word;
            getline(ss, word, ':');
            i.setID(to_string(stoi(word)));
            getline(ss, word, ':');
            i.setname(word);
            int ind = ltm->tm_wday + 1;
            if (ind == 1)
                ind += 6;
            string H, M;
            for (int j = 0; j < 2 * ind; j++)
            {
                getline(ss, word, ':');
                if (j % 2 == 0)
                {
                    H = word;
                }
                else
                {
                    M = word;
                }
            }
            inmates[i.getID()] = make_pair(make_pair(i.getname(), dorm), make_pair(H, M));
            getline(in,line);
        }
        in.close();

        auto it = inmates.find(ID);

        if (it != inmates.end())
        {
            system("cls");
            cout << GREEN << "\n\tInmate Found....." << RESET << endl;
            cout << "\n\nInmate's Details are Loading, Please wait.....";
            Sleep(3000);
            system("cls");
            cout << "\n\n\tDorm : " << (((it->second).first).second);
            cout << "\n\tID : " << it->first;
            cout << "\n\tName : " << ((it->second).first).first;
            cout << "\n\tSleep_time - " << ((it->second).second).first << ":" << ((it->second).second).second;
            getchar();
            getchar();
            cout << "\n\n\tPress Enter to continue.....";
        }
        else
        {
            system("cls");
            cout << RED << "\n\n\tError 404 : Inmate Not Found";
            Sleep(2000);
        }
    }
}
