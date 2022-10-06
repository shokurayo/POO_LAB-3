class AirSlime : public Slime
{
    public:
        int air_cut()
        {
            cout << "GURIEGEDON" << endl;
            return attack + 20;
        }
        void set_air_slime()
        {
            color = "air";
            attack = 15;
        }
};
