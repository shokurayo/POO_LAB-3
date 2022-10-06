class DarkSlime : public Slime
{
    public:
        int dark_beam()
        {
            cout << "Feel the pain of darkness" << endl;
            return attack + 31;
        }
        void set_dark_slime()
        {
            color = "dark";
            attack = 15;
        }
};
