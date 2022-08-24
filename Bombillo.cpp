struct Bombillo
{
private:
    string identificador;
    string color;
    string brillo;

public:
    Bombillo(std ::string pindentificador, string pcolor, string pbrillo)
    {
        this->identificador = pindentificador;
        this->color = pcolor;
        this->brillo = pbrillo;
    }

    void setBombillo(string pcolor, string pbrillo)
    {
        this->color = pcolor;
        this->brillo = pbrillo;
    }
};