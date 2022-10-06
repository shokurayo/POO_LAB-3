class WaterSlime : public Slime
{
    public:
        int splash()
        {
            cout << "Get wet" << endl;
            return attack + 12;
        }
        void set_water_slime()
        {
            color = "water";
            attack = 13;
        }
};
