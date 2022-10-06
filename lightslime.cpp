class LightSlime : public Slime
{
    public:
        int light_arrow()
        {
            cout << "LIGHT OF JUSTICE" << endl;
            return attack + 39;
        }
        void set_light_slime()
        {
            color = "light";
            attack = 17;
        }
};
