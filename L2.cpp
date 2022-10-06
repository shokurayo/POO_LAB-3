#include <iostream>

using namespace std;

class Hero
{
    int hp;

    public:
        void set_hp(int the_hp)
        {
            hp = the_hp;
        }

        int get_hp()
        {
            return hp;
        }
};

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

class Sword
{
    protected:
        string color;
    
    public:
        void set_color(string the_color)
        {
            color = the_color;
        }
        string get_color()
        {
            return color;
        }

};

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



int main(void)
{
    Hero hero;
    hero.set_hp(100);
    Sword sword;

    AirSlime air_slime;
    air_slime.set_air_slime();
    FireSlime fire_slime;
    fire_slime.set_fire_slime();
    WaterSlime water_slime;
    water_slime.set_water_slime();
    EarthSlime earth_slime;
    earth_slime.set_earth_slime();
    DarkSlime dark_slime;
    dark_slime.set_dark_slime();
    LightSlime light_slime;
    light_slime.set_light_slime();
    GodSlime god_slime;
    god_slime.set_god_slime();

    string our_color;

    cout << "YOU ARE A HERO THAT HAS TO DEFEAT 7 SLIMES" << endl;
    cout << "CHOOSE THE RIGHT ELEMENT TO DEFEAT A SLIME" << endl;
    cout << "air, fire, earth, water, dark, light, god" << endl;
    cout << "Your HP: " << hero.get_hp() << endl;
    cout << endl;
    while (hero.get_hp() > 0 && earth_slime.get_status())
    {
        while (hero.get_hp() > 0 && air_slime.get_status())
        {
            cout << "YOU ARE AGAINST AIR SLIME, PREPARE YOURSELF" << endl;

            cout << "Choose element: ";
            cin >> our_color;
            sword.set_color(our_color);

            if (air_slime.get_color() == sword.get_color())
            {
                air_slime.set_status(false);
                cout << "Congratulations! you have dfeated this slime" << endl;
            }
            else
            {
                int taken_damage = air_slime.air_cut();
                hero.set_hp(hero.get_hp() - taken_damage);
                cout << "You've taken: " << taken_damage << endl;
                cout << "HP: " << hero.get_hp() << endl;
            }
        }

        while (hero.get_hp() > 0 && water_slime.get_status())
        {
            cout << "YOU ARE AGAINST WATER SLIME, PREPARE YOURSELF" << endl;

            cout << "Choose element: ";
            cin >> our_color;
            sword.set_color(our_color);

            if (water_slime.get_color() == sword.get_color())
            {
                water_slime.set_status(false);
                cout << "Congratulations! you have dfeated this slime" << endl;
            }
            else
            {
                int taken_damage = water_slime.splash();
                hero.set_hp(hero.get_hp() - taken_damage);
                cout << "You've taken: " << taken_damage << endl;
                cout << "HP: " << hero.get_hp() << endl;
            }
        }

        while (hero.get_hp() > 0 && fire_slime.get_status())
        {
            cout << "YOU ARE AGAINST FIRE SLIME, PREPARE YOURSELF" << endl;

            cout << "Choose element: ";
            cin >> our_color;
            sword.set_color(our_color);

            if (fire_slime.get_color() == sword.get_color())
            {
                fire_slime.set_status(false);
                cout << "Congratulations! you have dfeated this slime" << endl;
            }
            else
            {
                int taken_damage = fire_slime.fire_ball();
                hero.set_hp(hero.get_hp() - taken_damage);
                cout << "You've taken: " << taken_damage << endl;
                cout << "HP: " << hero.get_hp() << endl;
            }
        }

        while (hero.get_hp() > 0 && earth_slime.get_status())
        {
            cout << "YOU ARE AGAINST EARTH SLIME, PREPARE YOURSELF" << endl;

            cout << "Choose element: ";
            cin >> our_color;
            sword.set_color(our_color);

            if (earth_slime.get_color() == sword.get_color())
            {
                earth_slime.set_status(false);
                cout << "Congratulations! you have dfeated this slime" << endl;
            }
            else
            {
                int taken_damage = earth_slime.earthquake();
                hero.set_hp(hero.get_hp() - taken_damage);
                cout << "You've taken: " << taken_damage << endl;
                cout << "HP: " << hero.get_hp() << endl;
            }
        }

        while (hero.get_hp() > 0 && dark_slime.get_status())
        {
            cout << "YOU ARE AGAINST DARK SLIME, PREPARE YOURSELF" << endl;

            cout << "Choose element: ";
            cin >> our_color;
            sword.set_color(our_color);

            if (dark_slime.get_color() == sword.get_color())
            {
                dark_slime.set_status(false);
                cout << "Congratulations! you have dfeated this slime" << endl;
            }
            else
            {
                int taken_damage = dark_slime.splash();
                hero.set_hp(hero.get_hp() - taken_damage);
                cout << "You've taken: " << taken_damage << endl;
                cout << "HP: " << hero.get_hp() << endl;
            }
        }

        while (hero.get_hp() > 0 && light_slime.get_status())
        {
            cout << "YOU ARE AGAINST LIGHT SLIME, PREPARE YOURSELF" << endl;

            cout << "Choose element: ";
            cin >> our_color;
            sword.set_color(our_color);

            if (light_slime.get_color() == sword.get_color())
            {
                light_slime.set_status(false);
                cout << "Congratulations! you have dfeated this slime" << endl;
            }
            else
            {
                int taken_damage = light_slime.splash();
                hero.set_hp(hero.get_hp() - taken_damage);
                cout << "You've taken: " << taken_damage << endl;
                cout << "HP: " << hero.get_hp() << endl;
            }
        }

        while (hero.get_hp() > 0 && god_slime.get_status())
        {
            cout << "YOU ARE AGAINST GOD SLIME, PREPARE YOURSELF" << endl;

            cout << "Choose element: ";
            cin >> our_color;
            sword.set_color(our_color);

            if (god_slime.get_color() == sword.get_color())
            {
                god_slime.set_status(false);
                cout << "Congratulations! you have dfeated this slime" << endl;
            }
            else
            {
                int taken_damage = god_slime.splash();
                hero.set_hp(hero.get_hp() - taken_damage);
                cout << "You've taken: " << taken_damage << endl;
                cout << "HP: " << hero.get_hp() << endl;
            }
        }

        if (hero.get_hp() < 0)
            cout << "YOU'RE DEAD" << endl;
        else
            cout << "YOU DEFEATED ALL THE SLIMES! NOICE!" << endl;
    }

    return 0;
}
