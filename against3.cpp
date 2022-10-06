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
