#ifndef INVENTORY_H
#define INVENTORY_H

class Inventory {

        private:
            int itemNumber;
            int quantity;
            double cost;
            double totalCost;
        public:
            // Default Constructor
            Inventory() {
                itemNumber = 0;
                quantity = 0;
                cost = 0;
            }
            // Second Constructor
            Inventory(int itemNum, int quantity, double cost) {
                itemNumber = itemNum;
                quantity = quantity;
                cost = cost;
                setTotalCost(quantity,cost);
            }

            void setItemNumber(int);
            void setQuantity(int);
            void setCost(double);
            void setTotalCost(int, double);
            int getItemNumber() const;
            int getQuantity() const;
            double getCost() const;
            double getTotalCost() const;

    };

#endif // INVENTORY_H