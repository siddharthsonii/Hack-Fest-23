#ifndef BUILDER_HPP
#define BUILDER_HPP

/*---------------------------------------------------------------------------*/

#include "Headers/ph/ph.hpp"
#include "Headers/Utils/Defines.hpp"

/*---------------------------------------------------------------------------*/

QT_CHARTS_USE_NAMESPACE

/*---------------------------------------------------------------------------*/

class Builder
    :   public boost::noncopyable
{
/*---------------------------------------------------------------------------*/

public:
/*---------------------------------------------------------------------------*/

    virtual ~Builder() noexcept {}

    virtual void build() = 0;

    virtual QChart* getHistohramChart( const Defines::Table& _table ) = 0;

    virtual QChart* getLineChart() const = 0;

    virtual QChart* geEchoSignalsChart() const = 0;

    virtual QChart* getDiscrepencyChart() const = 0;
    
    
  using ChartControllerImplPtr = std::unique_ptr< ChartController >;
    void fillSetupData();

  void getMessageBox( const QString& _text ) const noexcept;

  void drawTable( Defines::Table& _table ) const;

/*---------------------------------------------------------------------------*/

}; // class Builder

/*---------------------------------------------------------------------------*/

#endif // BUILDER_HPP
