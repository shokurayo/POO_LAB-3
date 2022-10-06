class GodSlime : public Slime
{
    public:
        int gods_fist()
        {
            cout << "YOU ARE PATHETIC" << endl;
            return attack + 888;
        }
        void set_god_slime()
        {
            color = "god";
            attack = 20;
        }
};
