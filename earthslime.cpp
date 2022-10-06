class EarthSlime : public Slime
{
    public:
        int earthquake()
        {
            cout << "EARTHQUAKEEEEE" << endl;
            return attack + 9;
        }
        void set_earth_slime()
        {
            color = "earth";
            attack = 4;
        }
};
