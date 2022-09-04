class Monome{
    friend class Polynome;
    public:
        Monome(int coeff = 0, unsigned int degre = 0);
        std::string afficher() const;
        double operator()(double x) const; // surcharge interne
        bool operator==(Monome const& X2) const; // surcharge interne
        bool operator<(Monome const& X2) const; // surcharge interne

        int get_coeff() const;
        unsigned get_degre() const;

        void set_coeff(int val);

    private:
        int coeff;
        unsigned int degre;
};

const Monome operator+(Monome X1, Monome const& X2); // surcharge externe 
const Monome operator-(Monome X1, Monome const& X2); // surcharge externe

const Monome operator*(int x, Monome const& X); // surcharge exterme
const Monome operator*(Monome const& X, int x); // surcharge externe
const Monome operator*(Monome X1, Monome const& X2); // surcharge externe pour le produit de deux monomes

std::ostream& operator<<(std::ostream& sortie, Monome const& X); // surcharge externe 