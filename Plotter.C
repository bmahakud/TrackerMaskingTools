

#include "TFile.h"
#include "TKey.h"
#include "TMacro.h"
#include "SetStyle.C"

void Plotter(){

TStyle *gStyle = new TStyle("gStyle","Style for P-TDR");
SetStyle st; 
st.SetPars(gStyle);



TFile *f1 = new TFile("Ideal.root");
TFile *f2 = new TFile("DQM_V0001_R000000001__Global__CMSSW_X_Y_Z__RECO.root");
//Efficiency vs Collection
TH1F *hEffvsCollf1=(TH1F*)f1->Get("DQMData/Run 1/Tracking/Run summary/Track/effic_vs_coll");
TH1F *hEffvsCollf2=(TH1F*)f2->Get("DQMData/Run 1/Tracking/Run summary/Track/effic_vs_coll");
hEffvsCollf2->SetLineColor(2);
hEffvsCollf2->SetMarkerColor(2);
hEffvsCollf1->SetLineWidth(2);
hEffvsCollf2->SetLineWidth(2);




//Efficiency vs Eta
TH1F *hEffvsEtaf1=(TH1F*)f1->Get("DQMData/Run 1/Tracking/Run summary/Track/general_trackingParticleRecoAsssociation/effic");
TH1F *hEffvsEtaf2=(TH1F*)f2->Get("DQMData/Run 1/Tracking/Run summary/Track/general_trackingParticleRecoAsssociation/effic");

hEffvsEtaf1->GetXaxis()->SetTitle("#eta");
hEffvsEtaf1->GetYaxis()->SetTitle("Tracking Efficiency (general Tracks)");

hEffvsEtaf2->SetLineColor(2);
hEffvsEtaf2->SetMarkerColor(2);

hEffvsEtaf1->SetLineWidth(2);
hEffvsEtaf2->SetLineWidth(2);

//Efficiency vs Pt
TH1F *hEffvsPtf1=(TH1F*)f1->Get("DQMData/Run 1/Tracking/Run summary/Track/general_trackingParticleRecoAsssociation/efficPt");
TH1F *hEffvsPtf2=(TH1F*)f2->Get("DQMData/Run 1/Tracking/Run summary/Track/general_trackingParticleRecoAsssociation/efficPt");

hEffvsPtf1->GetXaxis()->SetTitle("pT [GeV]");
hEffvsPtf1->GetYaxis()->SetTitle("Tracking Efficiency (general Tracks)");

hEffvsPtf2->SetLineColor(2);
hEffvsPtf2->SetMarkerColor(2);

hEffvsPtf1->SetLineWidth(2);
hEffvsPtf2->SetLineWidth(2);

//Efficiency vs Phi

TH1F *hEffvsPhif1=(TH1F*)f1->Get("DQMData/Run 1/Tracking/Run summary/Track/general_trackingParticleRecoAsssociation/effic_vs_phi");
TH1F *hEffvsPhif2=(TH1F*)f2->Get("DQMData/Run 1/Tracking/Run summary/Track/general_trackingParticleRecoAsssociation/effic_vs_phi");

hEffvsPhif1->GetXaxis()->SetTitle("#phi ");
hEffvsPhif1->GetYaxis()->SetTitle("Tracking Efficiency (general Tracks)");

hEffvsPhif2->SetLineColor(2);
hEffvsPhif2->SetMarkerColor(2);

hEffvsPhif1->SetLineWidth(2);
hEffvsPhif2->SetLineWidth(2);

//Efficiency vs dxy
TH1F *hEffvsDxyf1=(TH1F*)f1->Get("DQMData/Run 1/Tracking/Run summary/Track/general_trackingParticleRecoAsssociation/effic_vs_dxy");
TH1F *hEffvsDxyf2=(TH1F*)f2->Get("DQMData/Run 1/Tracking/Run summary/Track/general_trackingParticleRecoAsssociation/effic_vs_dxy");

hEffvsDxyf1->GetXaxis()->SetTitle("dxy ");
hEffvsDxyf1->GetYaxis()->SetTitle("Tracking Efficiency (general Tracks)");

hEffvsDxyf2->SetLineColor(2);
hEffvsDxyf2->SetMarkerColor(2);

hEffvsDxyf1->SetLineWidth(2);
hEffvsDxyf2->SetLineWidth(2);

//Efficiency vs dz


TH1F *hEffvsDzf1=(TH1F*)f1->Get("DQMData/Run 1/Tracking/Run summary/Track/general_trackingParticleRecoAsssociation/effic_vs_dz");
TH1F *hEffvsDzf2=(TH1F*)f2->Get("DQMData/Run 1/Tracking/Run summary/Track/general_trackingParticleRecoAsssociation/effic_vs_dz");

hEffvsDzf1->GetXaxis()->SetTitle("dz ");
hEffvsDzf1->GetYaxis()->SetTitle("Tracking Efficiency (general Tracks)");

hEffvsDzf2->SetLineColor(2);
hEffvsDzf2->SetMarkerColor(2);

hEffvsDzf1->SetLineWidth(2);
hEffvsDzf2->SetLineWidth(2);

//Efficinecy vs PU
TH1F *hEffvsPUf1=(TH1F*)f1->Get("DQMData/Run 1/Tracking/Run summary/Track/general_trackingParticleRecoAsssociation/effic_vs_pu");
TH1F *hEffvsPUf2=(TH1F*)f2->Get("DQMData/Run 1/Tracking/Run summary/Track/general_trackingParticleRecoAsssociation/effic_vs_pu");

hEffvsPUf1->GetXaxis()->SetTitle("pileup ");
hEffvsPUf1->GetYaxis()->SetTitle("Tracking Efficiency (general Tracks)");

hEffvsPUf2->SetLineColor(2);
hEffvsPUf2->SetMarkerColor(2);

hEffvsPUf1->SetLineWidth(2);
hEffvsPUf2->SetLineWidth(2);

//Fakerate vs Eta
TH1F *hFRvsEtaf1=(TH1F*)f1->Get("DQMData/Run 1/Tracking/Run summary/Track/general_trackingParticleRecoAsssociation/fakerate");
TH1F *hFRvsEtaf2=(TH1F*)f2->Get("DQMData/Run 1/Tracking/Run summary/Track/general_trackingParticleRecoAsssociation/fakerate");

hFRvsEtaf1->GetXaxis()->SetTitle("#eta");
hFRvsEtaf1->GetYaxis()->SetTitle("Fakerate (general Tracks)");

hFRvsEtaf2->SetLineColor(2);
hFRvsEtaf2->SetMarkerColor(2);

hFRvsEtaf1->SetLineWidth(2);
hFRvsEtaf2->SetLineWidth(2);

//Fakerate vs Pt
TH1F *hFRvsPtf1=(TH1F*)f1->Get("DQMData/Run 1/Tracking/Run summary/Track/general_trackingParticleRecoAsssociation/fakeratePt");
TH1F *hFRvsPtf2=(TH1F*)f2->Get("DQMData/Run 1/Tracking/Run summary/Track/general_trackingParticleRecoAsssociation/fakeratePt");

hFRvsPtf1->GetXaxis()->SetTitle("pT [GeV]");
hFRvsPtf1->GetYaxis()->SetTitle("Fakerate (general Tracks)");

hFRvsPtf2->SetLineColor(2);
hFRvsPtf2->SetMarkerColor(2);

hFRvsPtf1->SetLineWidth(2);
hFRvsPtf2->SetLineWidth(2);

//Fakerate vs Phi

TH1F *hFRvsPhif1=(TH1F*)f1->Get("DQMData/Run 1/Tracking/Run summary/Track/general_trackingParticleRecoAsssociation/fakerate_vs_phi");
TH1F *hFRvsPhif2=(TH1F*)f2->Get("DQMData/Run 1/Tracking/Run summary/Track/general_trackingParticleRecoAsssociation/fakerate_vs_phi");

hFRvsPhif1->GetXaxis()->SetTitle("#phi");
hFRvsPhif1->GetYaxis()->SetTitle("Fakerate (general Tracks)");

hFRvsPhif2->SetLineColor(2);
hFRvsPhif2->SetMarkerColor(2);

hFRvsPhif1->SetLineWidth(2);
hFRvsPhif2->SetLineWidth(2);

//Fakerate vs Dxy

TH1F *hFRvsDxyf1=(TH1F*)f1->Get("DQMData/Run 1/Tracking/Run summary/Track/general_trackingParticleRecoAsssociation/fakerate_vs_dxy");
TH1F *hFRvsDxyf2=(TH1F*)f2->Get("DQMData/Run 1/Tracking/Run summary/Track/general_trackingParticleRecoAsssociation/fakerate_vs_dxy");

hFRvsDxyf1->GetXaxis()->SetTitle("dxy");
hFRvsDxyf1->GetYaxis()->SetTitle("Fakerate (general Tracks)");

hFRvsDxyf2->SetLineColor(2);
hFRvsDxyf2->SetMarkerColor(2);

hFRvsDxyf1->SetLineWidth(2);
hFRvsDxyf2->SetLineWidth(2);

//Fakerate vs Dz
TH1F *hFRvsDzf1=(TH1F*)f1->Get("DQMData/Run 1/Tracking/Run summary/Track/general_trackingParticleRecoAsssociation/fakerate_vs_dz");
TH1F *hFRvsDzf2=(TH1F*)f2->Get("DQMData/Run 1/Tracking/Run summary/Track/general_trackingParticleRecoAsssociation/fakerate_vs_dz");

hFRvsDzf1->GetXaxis()->SetTitle("dz");
hFRvsDzf1->GetYaxis()->SetTitle("Fakerate (general Tracks)");

hFRvsDzf2->SetLineColor(2);
hFRvsDzf2->SetMarkerColor(2);

hFRvsDzf1->SetLineWidth(2);
hFRvsDzf2->SetLineWidth(2);




//Fakerate vs PU

TH1F *hFRvsPUf1=(TH1F*)f1->Get("DQMData/Run 1/Tracking/Run summary/Track/general_trackingParticleRecoAsssociation/fakerate_vs_pu");
TH1F *hFRvsPUf2=(TH1F*)f2->Get("DQMData/Run 1/Tracking/Run summary/Track/general_trackingParticleRecoAsssociation/fakerate_vs_pu");

hFRvsPUf1->GetXaxis()->SetTitle("PU");
hFRvsPUf1->GetYaxis()->SetTitle("Fakerate (general Tracks)");

hFRvsPUf2->SetLineColor(2);
hFRvsPUf2->SetMarkerColor(2);

hFRvsPUf1->SetLineWidth(2);
hFRvsPUf2->SetLineWidth(2);



TPaveText *pCMS = new TPaveText(0.132107,0.9308003,0.8327759,0.9923583,"brNDC");
pCMS->SetBorderSize(0);
pCMS->SetFillStyle(0);
pCMS->SetTextAlign(11);
pCMS->SetTextFont(42);
pCMS->SetTextSize(0.04);
pCMS->AddText("CMS #it{Simulation}                                 #sqrt{s}= 13 TeV");



char Legname1[100];


TLegend *leg_1D[24]; 

for(int k0=0;k0<24;k0++){
sprintf(Legname1,"leg_1D%i",k0);

leg_1D[k0]=new TLegend(0.4,0.3,0.60,0.5);
leg_1D[k0]->SetTextFont(62);
leg_1D[k0]->SetLineColor(1);
leg_1D[k0]->SetLineStyle(1);
leg_1D[k0]->SetLineWidth(3);
leg_1D[k0]->SetFillColor(0);
leg_1D[k0]->SetFillStyle(1001);
leg_1D[k0]->SetShadowColor(0);
leg_1D[k0]->SetDrawOption(0);
leg_1D[k0]->SetBorderSize(0);
leg_1D[k0]->SetTextSize(0.03);

}

char LegnameFR[100];


TLegend *leg_FR[24];

for(int k0=0;k0<24;k0++){
sprintf(LegnameFR,"leg_1D%i",k0);

leg_FR[k0]=new TLegend(0.4,0.6,0.80,0.8);
leg_FR[k0]->SetTextFont(62);
leg_FR[k0]->SetLineColor(1);
leg_FR[k0]->SetLineStyle(1);
leg_FR[k0]->SetLineWidth(3);
leg_FR[k0]->SetFillColor(0);
leg_FR[k0]->SetFillStyle(1001);
leg_FR[k0]->SetShadowColor(0);
leg_FR[k0]->SetDrawOption(0);
leg_FR[k0]->SetBorderSize(0);
leg_FR[k0]->SetTextSize(0.03);

}

TLegend *leg=new TLegend(0.4,0.8,0.80,0.93);
leg->SetTextFont(62);
leg->SetLineColor(1);
leg->SetLineStyle(1);
leg->SetLineWidth(3);
leg->SetFillColor(0);
leg->SetFillStyle(1001);
leg->SetShadowColor(0);
leg->SetDrawOption(0);
leg->SetBorderSize(0);
leg->SetTextSize(0.03);




TCanvas *c0=new TCanvas("c0","c0",1500,800);
c0->cd();
c0->Range(-12.47652,-1.663415,62.55284,1.136585);
c0->SetFillColor(0);
c0->SetBorderMode(0);
c0->SetBorderSize(2);
c0->SetTickx(1);
c0->SetTicky(1);
c0->SetLeftMargin(0.1596244);
c0->SetRightMargin(0.04068857);
c0->SetTopMargin(0.04878049);
c0->SetBottomMargin(0.6940766);
c0->SetFrameFillStyle(0);
c0->SetFrameLineWidth(2);
c0->SetFrameBorderMode(0);
c0->SetFrameBorderSize(2);
c0->SetFrameFillStyle(0);
c0->SetFrameLineWidth(2);
c0->SetFrameBorderMode(0);
c0->SetFrameBorderSize(2);
leg->AddEntry(hEffvsCollf1,"Ideal","l");
leg->AddEntry(hEffvsCollf2,"Bad module scenario","l");
hEffvsCollf1->GetYaxis()->SetRangeUser(0.0,1);
hEffvsCollf2->GetYaxis()->SetRangeUser(0.0,1);
hEffvsCollf1->Draw("hist");
hEffvsCollf2->Draw("hist SAME");
pCMS->Draw();
leg->Draw();
c0->SaveAs("Efficiency_vs_Coll.png");
c0->SaveAs("Efficiency_vs_Coll.pdf");




TCanvas *c1=new TCanvas("c1","c1");
c1->cd();
leg_1D[0]->AddEntry(hEffvsEtaf1,"Ideal","l");
leg_1D[0]->AddEntry(hEffvsEtaf2,"Bad module scenario","l");
hEffvsEtaf1->GetYaxis()->SetRangeUser(0.0,1);
hEffvsEtaf2->GetYaxis()->SetRangeUser(0.0,1);
hEffvsEtaf1->Draw("hist");
hEffvsEtaf2->Draw("hist SAME");
pCMS->Draw();
leg_1D[0]->Draw();
c1->SaveAs("Efficiency_vs_Eta.png");
c1->SaveAs("Efficiency_vs_Eta.pdf");
c1->Close();

TCanvas *c2=new TCanvas("c2","c2");
c2->cd();
leg_1D[1]->AddEntry(hEffvsPtf1,"Ideal","l");
leg_1D[1]->AddEntry(hEffvsPtf2,"Bad module scenario","l");
hEffvsPtf1->GetYaxis()->SetRangeUser(0.0,1);
hEffvsPtf2->GetYaxis()->SetRangeUser(0.0,1);
hEffvsPtf1->GetXaxis()->SetRangeUser(2.0,150);
hEffvsPtf2->GetXaxis()->SetRangeUser(2.0,150);

hEffvsPtf1->Draw("hist");
hEffvsPtf2->Draw("hist SAME");
pCMS->Draw();
leg_1D[1]->Draw();
c2->SaveAs("Efficiency_vs_Pt.png");
c2->SaveAs("Efficiency_vs_Pt.pdf");
c2->Close();

TCanvas *c3=new TCanvas("c3","c3");
c3->cd();
leg_1D[2]->AddEntry(hEffvsPhif1,"Ideal","l");
leg_1D[2]->AddEntry(hEffvsPhif2,"Bad module scenario","l");
hEffvsPhif1->GetYaxis()->SetRangeUser(0.0,1);
hEffvsPhif2->GetYaxis()->SetRangeUser(0.0,1);

hEffvsPhif1->Draw("hist");
hEffvsPhif2->Draw("hist SAME");
pCMS->Draw();
leg_1D[2]->Draw();
c3->SaveAs("Efficiency_vs_Phi.png");
c3->SaveAs("Efficiency_vs_Phi.pdf");
c3->Close();


TCanvas *c4=new TCanvas("c4","c4");
c4->cd();
leg_1D[3]->AddEntry(hEffvsDxyf1,"Ideal","l");
leg_1D[3]->AddEntry(hEffvsDxyf2,"Bad module scenario","l");
hEffvsDxyf1->GetYaxis()->SetRangeUser(0.0,1);
hEffvsDxyf2->GetYaxis()->SetRangeUser(0.0,1);

hEffvsDxyf1->Draw("hist");
hEffvsDxyf2->Draw("hist SAME");
pCMS->Draw();
leg_1D[3]->Draw();
c4->SaveAs("Efficiency_vs_Dxy.png");
c4->SaveAs("Efficiency_vs_Dxy.pdf");
c4->Close();



TCanvas *c5=new TCanvas("c5","c5");
c5->cd();
leg_1D[4]->AddEntry(hEffvsDzf1,"Ideal","l");
leg_1D[4]->AddEntry(hEffvsDzf2,"Bad module scenario","l");
hEffvsDzf1->GetYaxis()->SetRangeUser(0.0,1);
hEffvsDzf2->GetYaxis()->SetRangeUser(0.0,1);

hEffvsDzf1->Draw("hist");
hEffvsDzf2->Draw("hist SAME");
pCMS->Draw();
leg_1D[4]->Draw();
c5->SaveAs("Efficiency_vs_Dz.png");
c5->SaveAs("Efficiency_vs_Dz.pdf");
c5->Close();


TCanvas *c6=new TCanvas("c6","c6");
c6->cd();
leg_1D[5]->AddEntry(hEffvsPUf1,"Ideal","l");
leg_1D[5]->AddEntry(hEffvsPUf2,"Bad module scenario","l");
hEffvsPUf1->GetYaxis()->SetRangeUser(0.0,1);
hEffvsPUf2->GetYaxis()->SetRangeUser(0.0,1);

hEffvsPUf1->Draw("hist");
hEffvsPUf2->Draw("hist SAME");
pCMS->Draw();
leg_1D[5]->Draw();
c6->SaveAs("Efficiency_vs_PU.png");
c6->SaveAs("Efficiency_vs_PU.pdf");
c6->Close();


TCanvas *c7=new TCanvas("c7","c7");
c7->cd();
leg_FR[0]->AddEntry(hFRvsEtaf1,"Ideal","l");
leg_FR[0]->AddEntry(hFRvsEtaf2,"Bad module scenario","l");
hFRvsEtaf1->GetYaxis()->SetRangeUser(0.0,1);
hFRvsEtaf2->GetYaxis()->SetRangeUser(0.0,1);
hFRvsEtaf1->Draw("hist");
hFRvsEtaf2->Draw("hist SAME");
pCMS->Draw();
leg_FR[0]->Draw();
c7->SaveAs("FakeRate_vs_Eta.png");
c7->SaveAs("FakeRate_vs_Eta.pdf");
c7->Close();



TCanvas *c8=new TCanvas("c8","c8");
c8->cd();
leg_FR[1]->AddEntry(hFRvsPtf1,"Ideal","l");
leg_FR[1]->AddEntry(hFRvsPtf2,"Bad module scenario","l");
hFRvsPtf1->GetYaxis()->SetRangeUser(0.0,1);
hFRvsPtf2->GetYaxis()->SetRangeUser(0.0,1);
hFRvsPtf1->GetXaxis()->SetRangeUser(2.0,150);
hFRvsPtf2->GetXaxis()->SetRangeUser(2.0,150);

hFRvsPtf1->Draw("hist");
hFRvsPtf2->Draw("hist SAME");
pCMS->Draw();
leg_FR[1]->Draw();
c8->SaveAs("FakeRate_vs_Pt.png");
c8->SaveAs("FakeRate_vs_Pt.pdf");
c8->Close();

TCanvas *c9=new TCanvas("c9","c9");
c9->cd();
leg_FR[2]->AddEntry(hFRvsPhif1,"Ideal","l");
leg_FR[2]->AddEntry(hFRvsPhif2,"Bad module scenario","l");
hFRvsPhif1->GetYaxis()->SetRangeUser(0.0,1);
hFRvsPhif2->GetYaxis()->SetRangeUser(0.0,1);

hFRvsPhif1->Draw("hist");
hFRvsPhif2->Draw("hist SAME");
pCMS->Draw();
leg_FR[2]->Draw();
c9->SaveAs("FakeRate_vs_Phi.png");
c9->SaveAs("FakeRate_vs_Phi.pdf");
c9->Close();

TCanvas *c10=new TCanvas("c10","c10");
c10->cd();
leg_FR[3]->AddEntry(hFRvsDxyf1,"Ideal","l");
leg_FR[3]->AddEntry(hFRvsDxyf2,"Bad module scenario","l");
hFRvsDxyf1->GetYaxis()->SetRangeUser(0.0,1);
hFRvsDxyf2->GetYaxis()->SetRangeUser(0.0,1);

hFRvsDxyf1->Draw("hist");
hFRvsDxyf2->Draw("hist SAME");
pCMS->Draw();
leg_FR[3]->Draw();
c10->SaveAs("FakeRate_vs_Dxy.png");
c10->SaveAs("FakeRate_vs_Dxy.pdf");
c10->Close();

TCanvas *c11=new TCanvas("c11","c11");
c11->cd();
leg_FR[4]->AddEntry(hFRvsDzf1,"Ideal","l");
leg_FR[4]->AddEntry(hFRvsDzf2,"Bad module scenario","l");
hFRvsDzf1->GetYaxis()->SetRangeUser(0.0,1);
hFRvsDzf2->GetYaxis()->SetRangeUser(0.0,1);

hFRvsDzf1->Draw("hist");
hFRvsDzf2->Draw("hist SAME");
pCMS->Draw();
leg_FR[4]->Draw();
c11->SaveAs("FakeRate_vs_Dz.png");
c11->SaveAs("FakeRate_vs_Dz.pdf");
c11->Close();

TCanvas *c12=new TCanvas("c12","c12");
c12->cd();
leg_FR[5]->AddEntry(hFRvsPUf1,"Ideal","l");
leg_FR[5]->AddEntry(hFRvsPUf2,"Bad module scenario","l");
hFRvsPUf1->GetYaxis()->SetRangeUser(0.0,1);
hFRvsPUf2->GetYaxis()->SetRangeUser(0.0,1);

hFRvsPUf1->Draw("hist");
hFRvsPUf2->Draw("hist SAME");
pCMS->Draw();
leg_FR[5]->Draw();
c12->SaveAs("FakeRate_vs_PU.png");
c12->SaveAs("FakeRate_vs_PU.pdf");
c12->Close();





























}
