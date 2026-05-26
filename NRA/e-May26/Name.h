#pragma once
#ifndef SENECA_NAME_H
#define SENECA_NAME_H
namespace seneca {
    class Name {
        char* m_first{};
        char* m_last{};
        void freeMem();
    public:
        Name(); // default or no argument constructor
        Name(const char* first, const char* last);
        ~Name();
        void set(const char* first, const char* last);
        void display()const;
    };
}
#endif // !SENECA_NAME_H


