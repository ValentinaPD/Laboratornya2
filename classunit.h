#ifndef CLASSUNIT_H
#define CLASSUNIT_H
#include <QString>
#include <QVector>
#include <QSharedPointer>
#include <unit.h>
#include <QSharedPointer>

class ClassUnit : public Unit
{
public:
    enum AccessModifier {
     PUBLIC,
     PROTECTED,
     PRIVATE
     };

    static const QVector<QString> ACCESS_MODIFIERS;
private:
    QString m_name;
    using Fields = QVector<QSharedPointer<Unit>>;
    QVector<Fields> m_fields;


public:
    ClassUnit();
    explicit ClassUnit( const QString& name ){
         m_fields.resize( ACCESS_MODIFIERS.size() );
    }
    void add(const QSharedPointer<Unit>& unit, Flags flags );
    QString compile( unsigned int level = 0 );
};

#endif // CLASSUNIT_H
