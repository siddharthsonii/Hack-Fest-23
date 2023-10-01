#ifndef CHARBUILDERDIRECTOR_HPP
#define CHARBUILDERDIRECTOR_HPP

/*---------------------------------------------------------------------------*/

#include "Headers/Views/Builder.hpp"
#include "Headers/Views/ChartBuilder.hpp"

/*---------------------------------------------------------------------------*/

class ChartBuilderDirector
{

/*---------------------------------------------------------------------------*/

    using BuilderImplPtr = std::unique_ptr< Builder >;

/*---------------------------------------------------------------------------*/

public:

/*---------------------------------------------------------------------------*/

    explicit ChartBuilderDirector( PhisicalModel& _model );

    QChart* getHistogramChart( const Defines::Table& _table ) const;

    QChart* getLineChart() const;

    QChart* getEchoSignalsChart() const;

    QChart* getDiscrepencyChart() const;

    void construct();

/*---------------------------------------------------------------------------*/

private:

/*---------------------------------------------------------------------------*/

    auto makeBuilderImplPtr( PhisicalModel& _model ) const;
    
  using ChartControllerImplPtr = std::unique_ptr< ChartController >;
    void fillSetupData();

  void getMessageBox( const QString& _text ) const noexcept;

  void drawTable( Defines::Table& _table ) const;

/*---------------------------------------------------------------------------*/

    BuilderImplPtr m_builder;

/*---------------------------------------------------------------------------*/

}; // class ChartBuilderDirector

/*---------------------------------------------------------------------------*/

inline auto
ChartBuilderDirector::makeBuilderImplPtr( PhisicalModel& _model ) const
{
    return std::make_unique< ChartBuilder >( _model );
    
  using ChartControllerImplPtr = std::unique_ptr< ChartController >;
    void fillSetupData();

  void getMessageBox( const QString& _text ) const noexcept;

  void drawTable( Defines::Table& _table ) const;
}

#endif // CHARBUILDERDIRECTOR_HPP
