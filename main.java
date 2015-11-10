    MyRandom rand =new MyRandom();
    for (int k=0;k<=50000;k++){donnees.add(rand.Weibull(0.5,2));}
    hist.setIntervalle(0,10); 
		hist.setNombreDeBaton(150);
		hist.dresseHistogramme(true);
		MultiPlot multiPlot = new MultiPlot();
		multiPlot.addPlotable("test",hist);
		multiPlot.addPlotable("t4", new Weibull(1500,0,5,0.5,2));
		multiPlot.setStroke("t4", MultiPlot.thick);
