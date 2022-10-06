class Slime
{
    protected:
        string color;
        int attack;
        
        bool status = true;

    public:
        void set_slime(string the_color, int the_attack)
        {
            color = the_color;
            attack = the_attack;
        }
        void set_status(bool the_status)
        {
            status = the_status;
        }
        string get_color()
        {
            return color;
        }
        int get_attack()
        {
            return attack;
        }
        bool get_status()
        {
            return status;
        }
};
