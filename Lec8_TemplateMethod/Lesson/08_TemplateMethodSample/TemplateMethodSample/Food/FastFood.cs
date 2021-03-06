﻿using System;

namespace TemplateMethodSample.Food
{
    abstract class FastFood
    {
        public void Prepare()
        {
            RoastBread();
            PrepareMainIngredient();
            PutVegetables();

            if (CustomerWantsTopings())
                AddTopings();
        }

        public abstract void PrepareMainIngredient();

        public abstract void AddTopings();

        public virtual bool CustomerWantsTopings()
        {
            return true;
        }

        public void RoastBread()
        {
            Console.WriteLine("Bread");
        }

        public void PutVegetables()
        {
            Console.WriteLine("Vegetables");
        }
    }
}
