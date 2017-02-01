
#include <iostream>
#include <string>

class TextInput
{
public:
    virtual void add(char c)
    {
        value += c;
    }

    std::string getValue()
    {
        return value;
    }

protected:
    std::string value;
};

class NumericInput: public TextInput
{
public:
    void add(char c)
    {
        if (isdigit(c))
            value += c;
    }
};


int main()
{
    TextInput* input = new NumericInput();
    input->add('1');
    input->add('a');
    input->add('0');
    std::cout << input->getValue();
}
