class FireSlime : public Slime
{
    public:
        int fire_ball()
        {
            cout << "I'm gonna burn yo ass" << endl;
            return attack + 10;
        }
        void set_fire_slime()
        {
            color = "fire";
            attack = 10;
        }
};
