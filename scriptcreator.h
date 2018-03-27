#ifndef SCRIPTCREATOR_H
#define SCRIPTCREATOR_H

class ScriptCreator
{
   public:
    void createStandard();
    void createComprehensive();
    void createCustom(bool * options);
   private:
    bool copyScript(QString sourceDir, QString destinationDir, bool overWriteDirectory);
};

#endif
