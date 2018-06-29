#ifndef MYCLASS_H
#define MYCLASS_H
/* prevent a header file form being included more that once within on file. */


/*Robert Note: Constructor and Destructor don't need returen any value, Constructor need take parameter to initial private attribute variables, but Desstrutor don't need to user to take parameter to release resource.  */
class myClass
{
    public:
     myClass();
     ~myClass();
     void myPrint();   

    protected:

    private:
};

#endif // MYCLASS_H
