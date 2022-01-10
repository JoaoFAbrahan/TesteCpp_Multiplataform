#include<iostream>

/// Aplicação MacOS X
#ifdef TARGET_OS_MAC
int main()
{
    std::cout<<"Hello Mac!!!"<<std::endl;

    return 0;
}
#endif

/// Aplicação Linux
#ifdef __linux__
int main()
{
    std::cout<<"Hello Linux!!!"<<std::endl;

    return 0;
}
#endif

/// Aplicação Windows
#ifdef _WIN32 || _WIN64
int main()
{
    std::cout<<"Hello Windows!!!"<<std::endl;

    return 0;
}
#endif