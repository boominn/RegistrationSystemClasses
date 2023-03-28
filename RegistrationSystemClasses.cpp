#include <iostream>
#include <string>
using namespace std;

class Customer {
    private:
        string firstName;
        string lastName;
        string dateOfBirth;
        string contactNumber;
        string membershipType;
    public:
        Customer(string fName, string lName, string dob, string contact, string member) {
            firstName = fName;
            lastName = lName;
            dateOfBirth = dob;
            contactNumber = contact;
            membershipType = member;
        }
        void setFirstName(string fName) {
            firstName = fName;
        }
        string getFirstName() {
            return firstName;
        }
        void setLastName(string lName) {
            lastName = lName;
        }
        string getLastName() {
            return lastName;
        }
        void setDateOfBirth(string dob) {
            dateOfBirth = dob;
        }
        string getDateOfBirth() {
            return dateOfBirth;
        }
        void setContactNumber(string contact) {
            contactNumber = contact;
        }
        string getContactNumber() {
            return contactNumber;
        }
        void setMembershipType(string member) {
            membershipType = member;
        }
        string getMembershipType() {
            return membershipType;
        }
};

class MembershipOption {
    private:
        string membershipType;
        double price;
    public:
        MembershipOption(string member, double cost) {
            membershipType = member;
            price = cost;
        }
        void setMembershipType(string member) {
            membershipType = member;
        }
        string getMembershipType() {
            return membershipType;
        }
        void setPrice(double cost) {
            price = cost;
        }
        double getPrice() {
            return price;
        }
};

int main(int argc, char** argv) {
	return 0;
}
