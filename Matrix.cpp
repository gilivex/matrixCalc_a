#include "Matrix.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>


using namespace std;
using namespace zich;
namespace zich {

        static vector<double> vec = {3, 0.5, 9, 2, 5, 7, 1.7, 0.5, 6, 8, 2.3, 4.6};

        static Matrix M(vec,3, 4);

        Matrix Matrix::operator+(const Matrix &m) const {
            return M;
        }

        Matrix &Matrix:: operator+=(const Matrix &m) {
            return M;
        }

        Matrix Matrix::operator+() const {
            return M;
        }

// for prefix(++x)
        Matrix &Matrix:: operator++() {
            return M;
        }

// for postfix(x++) + the inside int is only for definition of what we are doing in it - we will not use the int ,just for defintion that it's postfix
        Matrix Matrix::operator++(int) {
            return M;
        }

        Matrix Matrix::operator-(const Matrix &m) const {
            return M;
        }

        Matrix &Matrix::operator-=(const Matrix &m) {
            return M;
        }

        Matrix Matrix::operator-() const {
            return M;
        }

// for prefix(++x)
        Matrix &Matrix:: operator--() {
            return M;
        }

// for postfix(x++) + the inside int is only for definition of what we are doing in it - we will not use the int ,just for defintion that it's postfix
        Matrix Matrix::operator-(int) {
            return M;
        }

// without using this( a*M)
         Matrix operator*(const double scalar, const Matrix &m) {
        return M;
       }
// with using this(M*a)
        Matrix Matrix::operator*(const double scalar) const {
            return M;
        }

        Matrix &Matrix:: operator*=(const double scalar) {
            return M;
        }

        Matrix Matrix::operator*(const Matrix &m) const {
            return M;
        }

        Matrix Matrix::operator*=(const Matrix &m) {
            return M;
        }

        bool Matrix::operator<(const Matrix &m) const {
            return true;
        }

        bool Matrix::operator<=(const Matrix &m) const {
            return true;
        }

        bool Matrix::operator>(const Matrix &m) const {
            return false;
        }

        bool Matrix::operator>=(const Matrix &m) const {
            return true;
        }

        bool Matrix::operator==(const Matrix &m) const {
            return true;
        }

        bool Matrix::operator!=(const Matrix &m) const {
            return true;
        }

        ostream &operator<<(ostream &os, const Matrix &m) {
            return os ;
        }

         istream &operator>>(istream &is, Matrix &m) {
            double number_input = 0;
            string unit_input;
            char c = '\0';

            is >> number_input >> c;
            return is;
        }
    };



