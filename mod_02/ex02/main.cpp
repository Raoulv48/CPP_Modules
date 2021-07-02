#include "Fixed.hpp"

#define RESET "\033[0m"
#define GREEN "\033[32m"

#define MSG(x) std::cout << std::endl << GREEN << x << RESET << std::endl << std::endl;
#define MSG_BOOL(x, y) std::cout << std::boolalpha << x << " = " << y << std::endl;
#define MSG_PLUS(x, y) std::cout << "Fixed(" << x <<") + Fixed(" << y << ") = " << Fixed(x) + Fixed(y) << std::endl;
#define MSG_SUBTRACT(x, y) std::cout << "Fixed(" << x <<") - Fixed(" << y << ") = " << Fixed(x) - Fixed(y) << std::endl;
#define MSG_MULTIPLY(x, y) std::cout << "Fixed(" << x <<") * Fixed(" << y << ") = " << Fixed(x) * Fixed(y) << std::endl;
#define MSG_DIVISION(x, y) std::cout << "Fixed(" << x <<") / Fixed(" << y << ") = " << Fixed(x) / Fixed(y) << std::endl;
#define MSG_MIN(x, y) std::cout << "Fixed::min(" << x << ", " << y << ") == " << Fixed::min(x,y) << std::endl;
#define MSG_MAX(x, y) std::cout << "Fixed::max(" << x << ", " << y << ") == " << Fixed::max(x,y) << std::endl;

static void PreIncrement(Fixed &a)
{
    
     std::cout << "Original: " << a << " Pre Increment: " << ++a << " New value: " << a << std::endl;
}

static void PostIncrement(Fixed &a)
{
     std::cout << "Original: " << a << " Post Increment: " << a++ << " New value: " << a << std::endl;
}

static void PreDecrement(Fixed &a)
{
     std::cout << "Original: " << a << " Pre Decrement: " << --a << " New value: " << a << std::endl;
}

static void PostDecrement(Fixed &a)
{
     std::cout << "Original: " << a << " post Decrement: " << a-- << " New value: " << a << std::endl;
}

int main( void ) {

    MSG("Subject included tests");
    {
        Fixed a;
        Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

        std::cout << a << std::endl;
        std::cout << ++a << std::endl;
        std::cout << a << std::endl;
        std::cout << a++ << std::endl;
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << Fixed::max( a, b ) << std::endl;
    }

    MSG("Comparisons")
    {
        {
            Fixed a(10), b(25);
            std::cout << "Fixed a: " << a << " Fixed b: " << b << std::endl;
            MSG_BOOL("a > b", (a > b));
            MSG_BOOL("a < b", (a < b));
            MSG_BOOL("a >= b", (a >= b));
            MSG_BOOL("a <= b", (a <= b));
            MSG_BOOL("a == b", (a == b));
            MSG_BOOL("a != b", (a != b));
            std::cout << std::endl;
        }
        {
            Fixed a(25.5f), b(25.4f);
            std::cout << "Fixed a: " << a << " Fixed b: " << b << std::endl;
            MSG_BOOL("a > b", (a > b));
            MSG_BOOL("a < b", (a < b));
            MSG_BOOL("a >= b", (a >= b));
            MSG_BOOL("a <= b", (a <= b));
            MSG_BOOL("a == b", (a == b));
            MSG_BOOL("a != b", (a != b));
            std::cout << std::endl;
        }
        {
            Fixed a(25.5f), b(25.5f);
            std::cout << "Fixed a: " << a << " Fixed b: " << b << std::endl;
            MSG_BOOL("a > b", (a > b));
            MSG_BOOL("a < b", (a < b));
            MSG_BOOL("a >= b", (a >= b));
            MSG_BOOL("a <= b", (a <= b));
            MSG_BOOL("a == b", (a == b));
            MSG_BOOL("a != b", (a != b));
            std::cout << std::endl;
        }
        {
            Fixed a(25), b(25.4f);
            std::cout << "Fixed a: " << a << " Fixed b: " << b << std::endl;
            MSG_BOOL("a > b", (a > b));
            MSG_BOOL("a < b", (a < b));
            MSG_BOOL("a >= b", (a >= b));
            MSG_BOOL("a <= b", (a <= b));
            MSG_BOOL("a == b", (a == b));
            MSG_BOOL("a != b", (a != b));
            std::cout << std::endl;
        }
    }
    
    MSG("Additions")
    {
        MSG_PLUS(5, 10);
        MSG_PLUS(5.5f,3.4f);
        MSG_PLUS(10, 5.5f);
        MSG_PLUS(5.12f, 5.12f);
    }

    MSG("Subractions")
    {
        MSG_SUBTRACT(5, 10);
        MSG_SUBTRACT(5.5f,3.4f);
        MSG_SUBTRACT(10, 5.5f);
        MSG_SUBTRACT(5.12f, 5.12f);
    }

    MSG("Multiplications")
    {
        MSG_MULTIPLY(5, 10);
        MSG_MULTIPLY(5.5f,3.4f);
        MSG_MULTIPLY(10, 5.5f);
        MSG_MULTIPLY(5.12f, 5.12f);
    }

    MSG("Divisions")
    {
        MSG_DIVISION(5, 10);
        MSG_DIVISION(5.5f,3.4f);
        MSG_DIVISION(10, 5.5f);
        MSG_DIVISION(5.12f, 5.12f);
    }

    MSG("Pre Increment")
    {
        Fixed a(10);
        Fixed b(5.5f);

        PreIncrement(a);
        PreIncrement(a);
        PreIncrement(b);
        PreIncrement(b);
    }

    MSG("Post Increment")
    {
        Fixed a(10);
        Fixed b(5.5f);

        PostIncrement(a);
        PostIncrement(a);
        PostIncrement(b);
        PostIncrement(b);
    }

    MSG("Pre Decrement")
    {
        Fixed a(10);
        Fixed b(5.5f);

        PreDecrement(a);
        PreDecrement(a);
        PreDecrement(b);
        PreDecrement(b);
    }

    MSG("Post Decrement")
    {
        Fixed a(10);
        Fixed b(5.5f);

        PostDecrement(a);
        PostDecrement(a);
        PostDecrement(b);
        PostDecrement(b);
    }

    MSG("Min")
    {
        MSG_MIN(5, 4.9f);
        MSG_MIN(4.9f, 5);
        MSG_MIN(3, 2);
        MSG_MIN(5.5f, 5.4f);
    }

    MSG("Min const")
    {
        const Fixed a(5), b(4.9f), c(3), d(2), e(5.5f), f(5.4f);
        MSG_MIN(a, b);
        MSG_MIN(b, a);
        MSG_MIN(c, d);
        MSG_MIN(e, f);
    }

    MSG("Max")
    {
        MSG_MAX(5, 4.9f);
        MSG_MAX(4.9f, 5);
        MSG_MAX(3, 2);
        MSG_MAX(5.5f, 5.4f);
    }

    MSG("Max const")
    {
        const Fixed a(5), b(4.9f), c(3), d(2), e(5.5f), f(5.4f);
        MSG_MAX(a, b);
        MSG_MAX(b, a);
        MSG_MAX(c, d);
        MSG_MAX(e, f);
    }

return 0;
}
